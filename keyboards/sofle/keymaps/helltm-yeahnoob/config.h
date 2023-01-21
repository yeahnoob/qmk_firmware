 /* Copyright 2021 HellSingCoder
  *
  * This program is free software: you can redistribute it and/or modify
  * it under the terms of the GNU General Public License as published by
  * the Free Software Foundation, either version 2 of the License, or
  * (at your option) any later version.
  *
  * This program is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU General Public License
  * along with this program.  If not, see <http://www.gnu.org/licenses/>.
  */


#pragma once

#define EE_HANDS

#define OLED_TIMEOUT 120000
#define OLED_BRIGHTNESS 120

// sk6812 RGB LED
#define RGB_DI_PIN D3

#undef RGBLED_NUM
#define RGBLED_NUM 58

#undef RGBLED_SPLIT
#define RGBLED_SPLIT { 29, 29 }

#define RGBLIGHT_DEFAULT_VAL RGBLIGHT_LIMIT_VAL - 80
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL + 4
