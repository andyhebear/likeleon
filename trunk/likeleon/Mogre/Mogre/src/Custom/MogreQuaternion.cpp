/*
-----------------------------------------------------------------------------
This source file is part of OGRE
    (Object-oriented Graphics Rendering Engine) ported to C++/CLI
For the latest info, see http://www.ogre3d.org/

Copyright (c) 2000-2005 The OGRE Team
Also see acknowledgements in Readme.html

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place - Suite 330, Boston, MA 02111-1307, USA, or go to
http://www.gnu.org/copyleft/lesser.txt.
-----------------------------------------------------------------------------
*/
// NOTE THAT THIS FILE IS BASED ON MATERIAL FROM:

// Magic Software, Inc.
// http://www.geometrictools.com
// Copyright (c) 2000, All Rights Reserved
//
// Source code from Magic Software is supplied under the terms of a license
// agreement and may not be copied or disclosed except in accordance with the
// terms of that agreement.  The various license agreements may be found at
// the Magic Software web site.  This file is subject to the license
//
// FREE SOURCE CODE
// http://www.geometrictools.com/License/WildMagic3License.pdf

#include "Stdafx.h"

#include "Custom\MogreQuaternion.h"
#include "Custom\MogreMatrix3.h"

namespace Mogre {

    void Quaternion::FromRotationMatrix (Matrix3^ kRot)
    {
        // Algorithm in Ken Shoemake's article in 1987 SIGGRAPH course notes
        // article "Quaternion Calculus and Fast Animation".

        Real fTrace = kRot->m00+kRot->m11+kRot->m22;
        Real fRoot;

        if ( fTrace > 0.0 )
        {
            // |w| > 1/2, may as well choose w > 1/2
            fRoot = System::Math::Sqrt(fTrace + 1.0);  // 2w
            w = 0.5*fRoot;
            fRoot = 0.5/fRoot;  // 1/(4w)
            x = (kRot->m21-kRot->m12)*fRoot;
            y = (kRot->m02-kRot->m20)*fRoot;
            z = (kRot->m10-kRot->m01)*fRoot;
        }
        else
        {
            // |w| <= 1/2
            static size_t s_iNext[3] = { 1, 2, 0 };
            size_t i = 0;
            if ( kRot->m11 > kRot->m00 )
                i = 1;
            if ( kRot->m22 > kRot[i,i] )
                i = 2;
            size_t j = s_iNext[i];
            size_t k = s_iNext[j];

            fRoot = System::Math::Sqrt(kRot[i,i]-kRot[j,j]-kRot[k,k] + 1.0);
			pin_ptr<Real> px = &x;
			pin_ptr<Real> py = &y;
			pin_ptr<Real> pz = &z;
            Real* apkQuat[3] = { px, py, pz };
            *apkQuat[i] = 0.5*fRoot;
            fRoot = 0.5/fRoot;
            w = (kRot[k,j]-kRot[j,k])*fRoot;
            *apkQuat[j] = (kRot[j,i]+kRot[i,j])*fRoot;
            *apkQuat[k] = (kRot[k,i]+kRot[i,k])*fRoot;
        }
    }
    //-----------------------------------------------------------------------
    Matrix3^ Quaternion::ToRotationMatrix ()
    {
		Matrix3^ kRot = gcnew Matrix3;

        Real fTx  = 2.0*x;
        Real fTy  = 2.0*y;
        Real fTz  = 2.0*z;
        Real fTwx = fTx*w;
        Real fTwy = fTy*w;
        Real fTwz = fTz*w;
        Real fTxx = fTx*x;
        Real fTxy = fTy*x;
        Real fTxz = fTz*x;
        Real fTyy = fTy*y;
        Real fTyz = fTz*y;
        Real fTzz = fTz*z;

        kRot->m00 = 1.0-(fTyy+fTzz);
        kRot->m01 = fTxy-fTwz;
        kRot->m02 = fTxz+fTwy;
        kRot->m10 = fTxy+fTwz;
        kRot->m11 = 1.0-(fTxx+fTzz);
        kRot->m12 = fTyz-fTwx;
        kRot->m20 = fTxz-fTwy;
        kRot->m21 = fTyz+fTwx;
        kRot->m22 = 1.0-(fTxx+fTyy);

		return kRot;
    }
    //-----------------------------------------------------------------------
    void Quaternion::FromAngleAxis (Radian rfAngle,
        Vector3 rkAxis)
    {
        // assert:  axis[] is unit length
        //
        // The quaternion representing the rotation is
        //   q = cos(A/2)+sin(A/2)*(x*i+y*j+z*k)

        Radian fHalfAngle ( 0.5*rfAngle );
        Real fSin = Math::Sin(fHalfAngle);
        w = Math::Cos(fHalfAngle);
        x = fSin*rkAxis.x;
        y = fSin*rkAxis.y;
        z = fSin*rkAxis.z;
    }
    //-----------------------------------------------------------------------
    void Quaternion::ToAngleAxis (Radian% rfAngle, Vector3% rkAxis)
    {
        // The quaternion representing the rotation is
        //   q = cos(A/2)+sin(A/2)*(x*i+y*j+z*k)

        Real fSqrLength = x*x+y*y+z*z;
        if ( fSqrLength > 0.0 )
        {
            rfAngle = 2.0*System::Math::Acos(w);
            Real fInvLength = Math::InvSqrt(fSqrLength);
            rkAxis.x = x*fInvLength;
            rkAxis.y = y*fInvLength;
            rkAxis.z = z*fInvLength;
        }
        else
        {
            // angle is 0 (mod 2*pi), so any axis will do
            rfAngle = Radian(0.0);
            rkAxis.x = 1.0;
            rkAxis.y = 0.0;
            rkAxis.z = 0.0;
        }
    }
    //-----------------------------------------------------------------------
    void Quaternion::FromAxes (array<Vector3>^ akAxis)
    {
        Matrix3^ kRot = gcnew Matrix3;

        for (size_t iCol = 0; iCol < 3; iCol++)
        {
            kRot[0, iCol] = akAxis[iCol].x;
            kRot[1, iCol] = akAxis[iCol].y;
            kRot[2, iCol] = akAxis[iCol].z;
        }

        FromRotationMatrix(kRot);
    }
    //-----------------------------------------------------------------------
    void Quaternion::FromAxes (Vector3 xaxis, Vector3 yaxis, Vector3 zaxis)
    {
        Matrix3^ kRot = gcnew Matrix3;

        kRot->m00 = xaxis.x;
        kRot->m10 = xaxis.y;
        kRot->m20 = xaxis.z;

        kRot->m01 = yaxis.x;
        kRot->m11 = yaxis.y;
        kRot->m21 = yaxis.z;

        kRot->m02 = zaxis.x;
        kRot->m12 = zaxis.y;
        kRot->m22 = zaxis.z;

        FromRotationMatrix(kRot);

    }
    //-----------------------------------------------------------------------
    void Quaternion::ToAxes (array<Vector3>^% akAxis)
    {
        Matrix3^ kRot = ToRotationMatrix();

		akAxis = gcnew array<Vector3>(3);

        for (size_t iCol = 0; iCol < 3; iCol++)
        {
            akAxis[iCol].x = kRot[0, iCol];
            akAxis[iCol].y = kRot[1, iCol];
            akAxis[iCol].z = kRot[2, iCol];
        }
    }
    //-----------------------------------------------------------------------
	Vector3 Quaternion::XAxis::get()
    {
        //Real fTx  = 2.0*x;
        Real fTy  = 2.0*y;
        Real fTz  = 2.0*z;
        Real fTwy = fTy*w;
        Real fTwz = fTz*w;
        Real fTxy = fTy*x;
        Real fTxz = fTz*x;
        Real fTyy = fTy*y;
        Real fTzz = fTz*z;

        return Vector3(1.0-(fTyy+fTzz), fTxy+fTwz, fTxz-fTwy);
    }
    //-----------------------------------------------------------------------
	Vector3 Quaternion::YAxis::get()
    {
        Real fTx  = 2.0*x;
        Real fTy  = 2.0*y;
        Real fTz  = 2.0*z;
        Real fTwx = fTx*w;
        Real fTwz = fTz*w;
        Real fTxx = fTx*x;
        Real fTxy = fTy*x;
        Real fTyz = fTz*y;
        Real fTzz = fTz*z;

        return Vector3(fTxy-fTwz, 1.0-(fTxx+fTzz), fTyz+fTwx);
    }
    //-----------------------------------------------------------------------
	Vector3 Quaternion::ZAxis::get()
    {
        Real fTx  = 2.0*x;
        Real fTy  = 2.0*y;
        Real fTz  = 2.0*z;
        Real fTwx = fTx*w;
        Real fTwy = fTy*w;
        Real fTxx = fTx*x;
        Real fTxz = fTz*x;
        Real fTyy = fTy*y;
        Real fTyz = fTz*y;

        return Vector3(fTxz+fTwy, fTyz-fTwx, 1.0-(fTxx+fTyy));
    }
    //-----------------------------------------------------------------------
    void Quaternion::ToAxes (Vector3% xaxis, Vector3% yaxis, Vector3% zaxis)
    {
        Matrix3^ kRot = ToRotationMatrix();

        xaxis.x = kRot->m00;
        xaxis.y = kRot->m10;
        xaxis.z = kRot->m20;

        yaxis.x = kRot->m01;
        yaxis.y = kRot->m11;
        yaxis.z = kRot->m21;

        zaxis.x = kRot->m02;
        zaxis.y = kRot->m12;
        zaxis.z = kRot->m22;
    }

    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator+ (Quaternion lkQ, Quaternion rkQ)
    {
        return Quaternion(lkQ.w+rkQ.w,lkQ.x+rkQ.x,lkQ.y+rkQ.y,lkQ.z+rkQ.z);
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator- (Quaternion lkQ, Quaternion rkQ)
    {
        return Quaternion(lkQ.w-rkQ.w,lkQ.x-rkQ.x,lkQ.y-rkQ.y,lkQ.z-rkQ.z);
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator* (Quaternion lkQ, Quaternion rkQ)
    {
        // NOTE:  Multiplication is not generally commutative, so in most
        // cases p*q != q*p.

        return Quaternion
        (
            lkQ.w * rkQ.w - lkQ.x * rkQ.x - lkQ.y * rkQ.y - lkQ.z * rkQ.z,
            lkQ.w * rkQ.x + lkQ.x * rkQ.w + lkQ.y * rkQ.z - lkQ.z * rkQ.y,
            lkQ.w * rkQ.y + lkQ.y * rkQ.w + lkQ.z * rkQ.x - lkQ.x * rkQ.z,
            lkQ.w * rkQ.z + lkQ.z * rkQ.w + lkQ.x * rkQ.y - lkQ.y * rkQ.x
        );
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator* (Quaternion lkQ, Real fScalar)
    {
        return Quaternion(fScalar*lkQ.w,fScalar*lkQ.x,fScalar*lkQ.y,fScalar*lkQ.z);
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator* (Real fScalar, Quaternion rkQ)
    {
        return Quaternion(fScalar*rkQ.w,fScalar*rkQ.x,fScalar*rkQ.y,
            fScalar*rkQ.z);
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::operator- (Quaternion rkQ)
    {
        return Quaternion(-rkQ.w,-rkQ.x,-rkQ.y,-rkQ.z);
    }
    //-----------------------------------------------------------------------
    Real Quaternion::Dot (Quaternion rkQ)
    {
        return w*rkQ.w+x*rkQ.x+y*rkQ.y+z*rkQ.z;
    }
    //-----------------------------------------------------------------------
	Real Quaternion::Norm::get()
    {
        return w*w+x*x+y*y+z*z;
    }
    //-----------------------------------------------------------------------
	Quaternion Quaternion::Inverse()
    {
        Real fNorm = w*w+x*x+y*y+z*z;
        if ( fNorm > 0.0 )
        {
            Real fInvNorm = 1.0/fNorm;
            return Quaternion(w*fInvNorm,-x*fInvNorm,-y*fInvNorm,-z*fInvNorm);
        }
        else
        {
            // return an invalid result to flag the error
            return ZERO;
        }
    }
    //-----------------------------------------------------------------------
	Quaternion Quaternion::UnitInverse()
    {
        // assert:  'this' is unit length
        return Quaternion(w,-x,-y,-z);
    }
    //-----------------------------------------------------------------------
	Quaternion Quaternion::Exp()
    {
        // If q = A*(x*i+y*j+z*k) where (x,y,z) is unit length, then
        // exp(q) = cos(A)+sin(A)*(x*i+y*j+z*k).  If sin(A) is near zero,
        // use exp(q) = cos(A)+A*(x*i+y*j+z*k) since A/sin(A) has limit 1.

        Radian fAngle ( System::Math::Sqrt(x*x+y*y+z*z) );
        Real fSin = Math::Sin(fAngle);

        Quaternion kResult;
        kResult.w = Math::Cos(fAngle);

        if ( Math::Abs(fSin) >= ms_fEpsilon )
        {
            Real fCoeff = fSin/(fAngle.ValueRadians);
            kResult.x = fCoeff*x;
            kResult.y = fCoeff*y;
            kResult.z = fCoeff*z;
        }
        else
        {
            kResult.x = x;
            kResult.y = y;
            kResult.z = z;
        }

        return kResult;
    }
    //-----------------------------------------------------------------------
	Quaternion Quaternion::Log()
    {
        // If q = cos(A)+sin(A)*(x*i+y*j+z*k) where (x,y,z) is unit length, then
        // log(q) = A*(x*i+y*j+z*k).  If sin(A) is near zero, use log(q) =
        // sin(A)*(x*i+y*j+z*k) since sin(A)/A has limit 1.

        Quaternion kResult;
        kResult.w = 0.0;

        if ( Math::Abs(w) < 1.0 )
        {
            Radian fAngle ( System::Math::Acos(w) );
            Real fSin = Math::Sin(fAngle);
            if ( Math::Abs(fSin) >= ms_fEpsilon )
            {
                Real fCoeff = fAngle.ValueRadians/fSin;
                kResult.x = fCoeff*x;
                kResult.y = fCoeff*y;
                kResult.z = fCoeff*z;
                return kResult;
            }
        }

        kResult.x = x;
        kResult.y = y;
        kResult.z = z;

        return kResult;
    }
    //-----------------------------------------------------------------------
    Vector3 Quaternion::operator* (Quaternion q, Vector3 v)
    {
		// nVidia SDK implementation
		Vector3 uv, uuv;
		Vector3 qvec(q.x, q.y, q.z);
		uv = qvec.CrossProduct(v);
		uuv = qvec.CrossProduct(uv);
		uv *= (2.0f * q.w);
		uuv *= 2.0f;

		return v + uv + uuv;

    }
    //-----------------------------------------------------------------------
	bool Quaternion::Equals(Quaternion rhs, Radian tolerance)
	{
        Real fCos = Dot(rhs);
        Radian angle = System::Math::Acos(fCos);

		return (System::Math::Abs(angle.ValueRadians) <= tolerance.ValueRadians)
            || Math::RealEqual(angle.ValueRadians, Math::PI, tolerance.ValueRadians);


	}
    //-----------------------------------------------------------------------
    Quaternion Quaternion::Slerp (Real fT, Quaternion rkP,
        Quaternion rkQ, bool shortestPath)
    {
        Real fCos = rkP.Dot(rkQ);
        Quaternion rkT;

        // Do we need to invert rotation?
        if (fCos < 0.0f && shortestPath)
        {
            fCos = -fCos;
            rkT = -rkQ;
        }
        else
        {
            rkT = rkQ;
        }

        if (Math::Abs(fCos) < 1 - ms_fEpsilon)
        {
            // Standard case (slerp)
            Real fSin = Math::Sqrt(1 - Math::Sqr(fCos));
            Radian fAngle = Math::ATan2(fSin, fCos);
            Real fInvSin = 1.0f / fSin;
            Real fCoeff0 = Math::Sin((1.0f - fT) * fAngle) * fInvSin;
            Real fCoeff1 = Math::Sin(fT * fAngle) * fInvSin;
            return fCoeff0 * rkP + fCoeff1 * rkT;
        }
        else
        {
            // There are two situations:
            // 1. "rkP" and "rkQ" are very close (fCos ~= +1), so we can do a linear
            //    interpolation safely.
            // 2. "rkP" and "rkQ" are almost inverse of each other (fCos ~= -1), there
            //    are an infinite number of possibilities interpolation. but we haven't
            //    have method to fix this case, so just use linear interpolation here.
            Quaternion t = (1.0f - fT) * rkP + fT * rkT;
            // taking the complement requires renormalisation
            t.Normalise();
            return t;
        }
	}
    //-----------------------------------------------------------------------
    Quaternion Quaternion::SlerpExtraSpins (Real fT,
        Quaternion rkP, Quaternion rkQ, int iExtraSpins)
    {
        Real fCos = rkP.Dot(rkQ);
        Radian fAngle ( System::Math::Acos(fCos) );

        if ( Math::Abs(fAngle.ValueRadians) < ms_fEpsilon )
            return rkP;

        Real fSin = Math::Sin(fAngle);
        Radian fPhase ( Math::PI*iExtraSpins*fT );
        Real fInvSin = 1.0/fSin;
        Real fCoeff0 = Math::Sin((1.0-fT)*fAngle - fPhase)*fInvSin;
        Real fCoeff1 = Math::Sin(fT*fAngle + fPhase)*fInvSin;
        return fCoeff0*rkP + fCoeff1*rkQ;
    }
    //-----------------------------------------------------------------------
    void Quaternion::Intermediate (Quaternion rkQ0,
        Quaternion rkQ1, Quaternion rkQ2,
        Quaternion& rkA, Quaternion& rkB)
    {
        // assert:  q0, q1, q2 are unit quaternions

        Quaternion kQ0inv = rkQ0.UnitInverse();
        Quaternion kQ1inv = rkQ1.UnitInverse();
        Quaternion rkP0 = kQ0inv*rkQ1;
        Quaternion rkP1 = kQ1inv*rkQ2;
        Quaternion kArg = 0.25*(rkP0.Log()-rkP1.Log());
        Quaternion kMinusArg = -kArg;

        rkA = rkQ1*kArg.Exp();
        rkB = rkQ1*kMinusArg.Exp();
    }
    //-----------------------------------------------------------------------
    Quaternion Quaternion::Squad (Real fT,
        Quaternion rkP, Quaternion rkA,
        Quaternion rkB, Quaternion rkQ, bool shortestPath)
    {
        Real fSlerpT = 2.0*fT*(1.0-fT);
        Quaternion kSlerpP = Slerp(fT, rkP, rkQ, shortestPath);
        Quaternion kSlerpQ = Slerp(fT, rkA, rkB);
        return Slerp(fSlerpT, kSlerpP ,kSlerpQ);
    }
    //-----------------------------------------------------------------------
    Real Quaternion::Normalise(void)
    {
        Real len = Norm;
        Real factor = 1.0f / System::Math::Sqrt(len);
        *this = *this * factor;
        return len;
    }
    //-----------------------------------------------------------------------
	Radian Quaternion::Roll::get()
	{
		return Radian(Math::ATan2(2*(x*y + w*z), w*w + x*x - y*y - z*z));
	}
    //-----------------------------------------------------------------------
	Radian Quaternion::Pitch::get()
	{
		return Radian(Math::ATan2(2*(y*z + w*x), w*w - x*x - y*y + z*z));
	}
    //-----------------------------------------------------------------------
	Radian Quaternion::Yaw::get()
	{
		return Radian(System::Math::Asin(-2*(x*z - w*y)));
	}
    //-----------------------------------------------------------------------
    Quaternion Quaternion::Nlerp(Real fT, Quaternion rkP,
        Quaternion rkQ, bool shortestPath)
    {
		Quaternion result;
        Real fCos = rkP.Dot(rkQ);
		if (fCos < 0.0f && shortestPath)
		{
			result = rkP + fT * ((-rkQ) - rkP);
		}
		else
		{
			result = rkP + fT * (rkQ - rkP);
		}
        result.Normalise();
        return result;
    }
}
