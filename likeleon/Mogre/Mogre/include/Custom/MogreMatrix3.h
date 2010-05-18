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
// NB All code adapted from Wild Magic 0.2 Matrix math (free source code)
// http://www.geometrictools.com/

// NOTE.  The (x,y,z) coordinate system is assumed to be right-handed.
// Coordinate axis rotation matrices are of the form
//   RX =    1       0       0
//           0     cos(t) -sin(t)
//           0     sin(t)  cos(t)
// where t > 0 indicates a counterclockwise rotation in the yz-plane
//   RY =  cos(t)    0     sin(t)
//           0       1       0
//        -sin(t)    0     cos(t)
// where t > 0 indicates a counterclockwise rotation in the zx-plane
//   RZ =  cos(t) -sin(t)    0
//         sin(t)  cos(t)    0
//           0       0       1
// where t > 0 indicates a counterclockwise rotation in the xy-plane.

#pragma once

#include "OgreMatrix3.h"
#include "Prerequisites.h"
#include "Custom\MogreVector3.h"

namespace Mogre
{
    /** A 3x3 matrix which can represent rotations around axes.
        @note
            <b>All the code is adapted from the Wild Magic 0.2 Matrix
            library (http://www.geometrictools.com/).</b>
        @par
            The coordinate system is assumed to be <b>right-handed</b>.
    */
	[Serializable]
	[StructLayout(LayoutKind::Explicit)]
    public ref class Matrix3
    {
	public:
		[Serializable]
		[StructLayout(LayoutKind::Sequential)]
		value struct NativeValue
		{
			Real m00, m01, m02;
			Real m10, m11, m12;
			Real m20, m21, m22;

			property Real default[int,int]
			{
				inline Real get(int row, int col)
				{
					return *(&m00 + ((3*row) + col)); 
				}

				inline void set (int row, int col, Real value)
				{
					*(&m00 + ((3*row) + col)) = value;
				}
			}
		};

		static operator Matrix3^ (const Ogre::Matrix3& matrix)
		{
			Matrix3^ mat = gcnew Matrix3;
			pin_ptr<Real> pdest = &mat->m00;
			memcpy(pdest,matrix[0],9*sizeof(Real));
			return mat;
		}

    public:
		inline Matrix3 () {};
        inline explicit Matrix3 (array<Real,2>^ arr)
		{
			pin_ptr<Real> pdest = &m00;
			pin_ptr<Real> psrc = &arr[0,0];
			memcpy(pdest,psrc,9*sizeof(Real));
		}
        inline Matrix3 (Matrix3^ rkMatrix)
		{
			pin_ptr<Real> pdest = &m00;
			pin_ptr<Real> psrc = &rkMatrix->m00;
			memcpy(pdest,psrc,9*sizeof(Real));
		}
        Matrix3 (Real fEntry00, Real fEntry01, Real fEntry02,
                    Real fEntry10, Real fEntry11, Real fEntry12,
                    Real fEntry20, Real fEntry21, Real fEntry22)
		{
			m00 = fEntry00;
			m01 = fEntry01;
			m02 = fEntry02;
			m10 = fEntry10;
			m11 = fEntry11;
			m12 = fEntry12;
			m20 = fEntry20;
			m21 = fEntry21;
			m22 = fEntry22;
		}

		property Real default[int,int]
		{
			inline Real get(int row, int col)
			{
				return *(&m00 + ((3*row) + col)); 
			}

			inline void set (int row, int col, Real value)
			{
				*(&m00 + ((3*row) + col)) = value;
			}
		}

		Vector3 GetColumn (size_t iCol);
        void SetColumn(size_t iCol, Vector3 vec);
        void FromAxes(Vector3 xAxis, Vector3 yAxis, Vector3 zAxis);

        // assignment and comparison
        inline Matrix3^ operator= (Matrix3^ rkMatrix)
		{
			pin_ptr<Real> pdest = &m00;
			pin_ptr<Real> psrc = &rkMatrix->m00;
			memcpy(pdest,psrc,9*sizeof(Real));
			return this;
		}
        static bool operator== (Matrix3^ lmat, Matrix3^ rkMatrix);
        inline static bool operator!= (Matrix3^ lmat, Matrix3^ rkMatrix)
		{
			return !(lmat == rkMatrix);
		}

		virtual bool Equals(Object^ obj) override
		{
			Matrix3^ clr = dynamic_cast<Matrix3^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}

			return (this == clr);
		}
		
		bool Equals(Matrix3^ obj)
		{
			return (this == obj);
		}

        // arithmetic operations
        static Matrix3^ operator+ (Matrix3^ lmat, Matrix3^ rkMatrix);
        static Matrix3^ operator- (Matrix3^ lmat, Matrix3^ rkMatrix);
        static Matrix3^ operator* (Matrix3^ lmat, Matrix3^ rkMatrix);
        static Matrix3^ operator- (Matrix3^ mat);

        // matrix * vector [3x3 * 3x1 = 3x1]
        static Vector3 operator* (Matrix3^ lmat, Vector3 rkVector);

        // vector * matrix [1x3 * 3x3 = 1x3]
        static Vector3 operator* (Vector3 rkVector,
            Matrix3^ rkMatrix);

        // matrix * scalar
        static Matrix3^ operator* (Matrix3^ lmat, Real fScalar);

        // scalar * matrix
        static Matrix3^ operator* (Real fScalar, Matrix3^ rkMatrix);

        // utilities
        Matrix3^ Transpose();
        bool Inverse ([Out] Matrix3^% rkInverse, Real fTolerance);
        bool Inverse ([Out] Matrix3^% rkInverse)
		{
			return Inverse(rkInverse, 1e-06);
		}
        Matrix3^ Inverse (Real fTolerance);
        Matrix3^ Inverse ()
		{
			return Inverse(1e-06);
		}
		property Real Determinant
		{
			Real get();
		}

        // singular value decomposition
        void SingularValueDecomposition ([Out] Matrix3^% rkL, [Out] Vector3% rkS,
            [Out] Matrix3^% rkR);
        void SingularValueComposition (Matrix3^ rkL,
            Vector3 rkS, Matrix3^ rkR);

        // Gram-Schmidt orthonormalization (applied to columns of rotation matrix)
        void Orthonormalize ();

        // orthogonal Q, diagonal D, upper triangular U stored as (u01,u02,u12)
        void QDUDecomposition ([Out] Matrix3^% rkQ, [Out] Vector3% rkD,
            [Out] Vector3% rkU);

		property Real SpectralNorm
		{
			Real get();
		}

        // matrix must be orthonormal
        void ToAxisAngle ([Out] Vector3% rkAxis, [Out] Radian% rfAngle);
		inline void ToAxisAngle ([Out] Vector3% rkAxis, [Out] Degree% rfAngle) {
			Radian r;
			ToAxisAngle ( rkAxis, r );
			rfAngle = r;
		}
        void FromAxisAngle (Vector3 rkAxis, Radian fRadians);
#ifndef OGRE_FORCE_ANGLE_TYPES
        inline void ToAxisAngle ([Out] Vector3% rkAxis, [Out] Real% rfRadians) {
			Radian r;
			ToAxisAngle ( rkAxis, r );
			rfRadians = r.ValueRadians();
		}
        inline void FromAxisAngle (Vector3 rkAxis, Real fRadians) {
			FromAxisAngle ( rkAxis, Radian(fRadians) );
		}
#endif//OGRE_FORCE_ANGLE_TYPES

        // The matrix must be orthonormal.  The decomposition is yaw*pitch*roll
        // where yaw is rotation about the Up vector, pitch is rotation about the
        // Right axis, and roll is rotation about the Direction axis.
        bool ToEulerAnglesXYZ ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        bool ToEulerAnglesXZY ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        bool ToEulerAnglesYXZ ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        bool ToEulerAnglesYZX ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        bool ToEulerAnglesZXY ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        bool ToEulerAnglesZYX ([Out] Radian% rfYAngle, [Out] Radian% rfPAngle,
            [Out] Radian% rfRAngle);
        void FromEulerAnglesXYZ (Radian fYAngle, Radian fPAngle, Radian fRAngle);
        void FromEulerAnglesXZY (Radian fYAngle, Radian fPAngle, Radian fRAngle);
        void FromEulerAnglesYXZ (Radian fYAngle, Radian fPAngle, Radian fRAngle);
        void FromEulerAnglesYZX (Radian fYAngle, Radian fPAngle, Radian fRAngle);
        void FromEulerAnglesZXY (Radian fYAngle, Radian fPAngle, Radian fRAngle);
        void FromEulerAnglesZYX (Radian fYAngle, Radian fPAngle, Radian fRAngle);
#ifndef OGRE_FORCE_ANGLE_TYPES
        inline bool ToEulerAnglesXYZ ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesXYZ(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline bool ToEulerAnglesXZY ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesXZY(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline bool ToEulerAnglesYXZ ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesYXZ(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline bool ToEulerAnglesYZX ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesYZX(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline bool ToEulerAnglesZXY ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesZXY(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline bool ToEulerAnglesZYX ([Out] float% rfYAngle, [Out] float% rfPAngle,
            [Out] float% rfRAngle) {
			Radian y, p, r;
			bool b = ToEulerAnglesZYX(y,p,r);
			rfYAngle = y.ValueRadians();
			rfPAngle = p.ValueRadians();
			rfRAngle = r.ValueRadians();
			return b;
		}
        inline void FromEulerAnglesXYZ (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesXYZ ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
        inline void FromEulerAnglesXZY (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesXZY ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
        inline void FromEulerAnglesYXZ (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesYXZ ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
        inline void FromEulerAnglesYZX (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesYZX ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
        inline void FromEulerAnglesZXY (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesZXY ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
        inline void FromEulerAnglesZYX (float fYAngle, float fPAngle, float fRAngle) {
			FromEulerAnglesZYX ( Radian(fYAngle), Radian(fPAngle), Radian(fRAngle) );
		}
#endif//OGRE_FORCE_ANGLE_TYPES
        // eigensolver, matrix must be symmetric
        void EigenSolveSymmetric (array<Real>^ afEigenvalue,
            array<Vector3>^ akEigenvector);

        static void TensorProduct (Vector3 rkU, Vector3 rkV,
            [Out] Matrix3^% rkProduct);

        static const Real EPSILON = 1e-06;
        static Matrix3^ ZERO = gcnew Matrix3(0,0,0,0,0,0,0,0,0);
        static Matrix3^ IDENTITY = gcnew Matrix3(1,0,0,0,1,0,0,0,1);

		[FieldOffset(0)]
		NativeValue value;

		[FieldOffset(0)]
		Real m00;
		[FieldOffset(1*sizeof(Real))]
		Real m01;
		[FieldOffset(2*sizeof(Real))]
		Real m02;
		[FieldOffset(3*sizeof(Real))]
		Real m10;
		[FieldOffset(4*sizeof(Real))]
		Real m11;
		[FieldOffset(5*sizeof(Real))]
		Real m12;
		[FieldOffset(6*sizeof(Real))]
		Real m20;
		[FieldOffset(7*sizeof(Real))]
		Real m21;
		[FieldOffset(8*sizeof(Real))]
		Real m22;

	protected public:
        // support for eigensolver
        void Tridiagonal (Real afDiag[3], Real afSubDiag[3]);
        bool QLAlgorithm (Real afDiag[3], Real afSubDiag[3]);

        // support for singular value decomposition
        static const Real ms_fSvdEpsilon = 1e-04;
        static const unsigned int ms_iSvdMaxIterations = 32;
        static void Bidiagonalize (Matrix3^ kA, Matrix3^ kL,
            Matrix3^ kR);
        static void GolubKahanStep (Matrix3^ kA, Matrix3^ kL,
            Matrix3^ kR);

        // support for spectral norm
        static Real MaxCubicRoot (Real afCoeff[3]);
    };
}