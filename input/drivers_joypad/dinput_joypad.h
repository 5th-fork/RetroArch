/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2016 - Daniel De Matteis
 *  Copyright (C) 2016-2019 - Brad Parker
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __DINPUT_JOYPAD_H
#define __DINPUT_JOYPAD_H

#include <stdint.h>
#include <boolean.h>
#include <retro_common_api.h>

#include <dinput.h>

/* For DIJOYSTATE2 struct, rgbButtons will always have 128 elements */
#define ARRAY_SIZE_RGB_BUTTONS 128

RETRO_BEGIN_DECLS

struct dinput_joypad_data
{
   LPDIRECTINPUTDEVICE8 joypad;
   DIJOYSTATE2 joy_state;
   char* joy_name;
   char* joy_friendly_name;
   int32_t vid;
   int32_t pid;
   LPDIRECTINPUTEFFECT rumble_iface[2];
   DIEFFECT rumble_props;
};

bool dinput_joypad_get_vidpid_from_xinput_index(
      int32_t index, int32_t *vid,
      int32_t *pid, int32_t *dinput_index);

RETRO_END_DECLS

#endif
