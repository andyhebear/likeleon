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
#include "Stdafx.h"

#include "Custom\MogreColourValue.h"

namespace Mogre
{

    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    ABGR ColourValue::GetAsABGR(void)
#else
    RGBA ColourValue::GetAsRGBA(void)
#endif
    {
        uint8 val8;
        uint32 val32 = 0;

        // Convert to 32bit pattern
        // (RGBA = 8888)

        // Red
        val8 = static_cast<uint8>(r * 255);
        val32 = val8 << 24;

        // Green
        val8 = static_cast<uint8>(g * 255);
        val32 += val8 << 16;

        // Blue
        val8 = static_cast<uint8>(b * 255);
        val32 += val8 << 8;

        // Alpha
        val8 = static_cast<uint8>(a * 255);
        val32 += val8;

        return val32;
    }
    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    BGRA ColourValue::GetAsBGRA(void)
#else
    ARGB ColourValue::GetAsARGB(void)
#endif
    {
        uint8 val8;
        uint32 val32 = 0;

        // Convert to 32bit pattern
        // (ARGB = 8888)

        // Alpha
        val8 = static_cast<uint8>(a * 255);
        val32 = val8 << 24;

        // Red
        val8 = static_cast<uint8>(r * 255);
        val32 += val8 << 16;

        // Green
        val8 = static_cast<uint8>(g * 255);
        val32 += val8 << 8;

        // Blue
        val8 = static_cast<uint8>(b * 255);
        val32 += val8;


        return val32;
    }
	//---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
	ARGB ColourValue::GetAsARGB(void)
#else
	BGRA ColourValue::GetAsBGRA(void)
#endif
	{
		uint8 val8;
		uint32 val32 = 0;

		// Convert to 32bit pattern
		// (ARGB = 8888)

		// Blue
		val8 = static_cast<uint8>(b * 255);
		val32 = val8 << 24;

		// Green
		val8 = static_cast<uint8>(g * 255);
		val32 += val8 << 16;

		// Red
		val8 = static_cast<uint8>(r * 255);
		val32 += val8 << 8;

		// Alpha
		val8 = static_cast<uint8>(a * 255);
		val32 += val8;


		return val32;
	}
    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    RGBA ColourValue::GetAsRGBA(void)
#else
    ABGR ColourValue::GetAsABGR(void)
#endif
    {
        uint8 val8;
        uint32 val32 = 0;

        // Convert to 32bit pattern
        // (ABRG = 8888)

        // Alpha
        val8 = static_cast<uint8>(a * 255);
        val32 = val8 << 24;

        // Blue
        val8 = static_cast<uint8>(b * 255);
        val32 += val8 << 16;

        // Green
        val8 = static_cast<uint8>(g * 255);
        val32 += val8 << 8;

        // Red
        val8 = static_cast<uint8>(r * 255);
        val32 += val8;


        return val32;
    }
    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    void ColourValue::SetAsABGR(const ABGR val)
#else
    void ColourValue::SetAsRGBA(const RGBA val)
#endif
    {
        uint32 val32 = val;

        // Convert from 32bit pattern
        // (RGBA = 8888)

        // Red
        r = static_cast<uint8>(val32 >> 24) / 255.0f;

        // Green
        g = static_cast<uint8>(val32 >> 16) / 255.0f;

        // Blue
        b = static_cast<uint8>(val32 >> 8) / 255.0f;

        // Alpha
        a = static_cast<uint8>(val32) / 255.0f;
    }
    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    void ColourValue::SetAsBGRA(const BGRA val)
#else
    void ColourValue::SetAsARGB(const ARGB val)
#endif
    {
        uint32 val32 = val;

        // Convert from 32bit pattern
        // (ARGB = 8888)

        // Alpha
        a = static_cast<uint8>(val32 >> 24) / 255.0f;

        // Red
        r = static_cast<uint8>(val32 >> 16) / 255.0f;

        // Green
        g = static_cast<uint8>(val32 >> 8) / 255.0f;

        // Blue
        b = static_cast<uint8>(val32) / 255.0f;
    }
	//---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
	void ColourValue::SetAsARGB(const ARGB val)
#else
	void ColourValue::SetAsBGRA(const BGRA val)
#endif
	{
		uint32 val32 = val;

		// Convert from 32bit pattern
		// (ARGB = 8888)

		// Blue
		b = static_cast<uint8>(val32 >> 24) / 255.0f;

		// Green
		g = static_cast<uint8>(val32 >> 16) / 255.0f;

		// Red
		r = static_cast<uint8>(val32 >> 8) / 255.0f;

		// Alpha
		a = static_cast<uint8>(val32) / 255.0f;
	}
    //---------------------------------------------------------------------
#if OGRE_ENDIAN == OGRE_ENDIAN_BIG
    void ColourValue::SetAsRGBA(const RGBA val)
#else
    void ColourValue::SetAsABGR(const ABGR val)
#endif
    {
        uint32 val32 = val;

        // Convert from 32bit pattern
        // (ABGR = 8888)

        // Alpha
        a = static_cast<uint8>(val32 >> 24) / 255.0f;

        // Blue
        b = static_cast<uint8>(val32 >> 16) / 255.0f;

        // Green
        g = static_cast<uint8>(val32 >> 8) / 255.0f;

        // Red
        r = static_cast<uint8>(val32) / 255.0f;
    }
    //---------------------------------------------------------------------
    bool ColourValue::operator==(ColourValue lcol, ColourValue rhs)
    {
        return (lcol.r == rhs.r &&
            lcol.g == rhs.g &&
            lcol.b == rhs.b &&
            lcol.a == rhs.a);
    }
    //---------------------------------------------------------------------
    bool ColourValue::operator!=(ColourValue lcol, ColourValue rhs)
    {
        return !(lcol == rhs);
    }
	//---------------------------------------------------------------------
	void ColourValue::SetHSB(Real hue, Real saturation, Real brightness)
	{
		// wrap hue
		if (hue > 1.0f)
		{
			hue -= (int)hue;
		}
		else if (hue < 0.0f)
		{
			hue += (int)hue + 1;
		}
		// clamp saturation / brightness
		saturation = System::Math::Min(saturation, (Real)1.0);
		saturation = System::Math::Max(saturation, (Real)0.0);
		brightness = System::Math::Min(brightness, (Real)1.0);
		brightness = System::Math::Max(brightness, (Real)0.0);

		if (brightness == 0.0f)
		{   
			// early exit, this has to be black
			r = g = b = 0.0f;
			return;
		}

		if (saturation == 0.0f)
		{   
			// early exit, this has to be grey

			r = g = b = brightness;
			return;
		}


		Real hueDomain  = hue * 6.0f;
		if (hueDomain >= 6.0f)
		{
			// wrap around, and allow mathematical errors
			hueDomain = 0.0f;
		}
		unsigned short domain = (unsigned short)hueDomain;
		Real f1 = brightness * (1 - saturation);
		Real f2 = brightness * (1 - saturation * (hueDomain - domain));
		Real f3 = brightness * (1 - saturation * (1 - (hueDomain - domain)));

		switch (domain)
		{
		case 0:
			// red domain; green ascends
			r = brightness;
			g = f3;
			b = f1;
			break;
		case 1:
			// yellow domain; red descends
			r = f2;
			g = brightness;
			b = f1;
			break;
		case 2:
			// green domain; blue ascends
			r = f1;
			g = brightness;
			b = f3;
			break;
		case 3:
			// cyan domain; green descends
			r = f1;
			g = f2;
			b = brightness;
			break;
		case 4:
			// blue domain; red ascends
			r = f3;
			g = f1;
			b = brightness;
			break;
		case 5:
			// magenta domain; blue descends
			r = brightness;
			g = f1;
			b = f2;
			break;
		}


	}
}