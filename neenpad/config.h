// Copyright 2023 Jacob Thompson (@oden42)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT


#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
//#define VENDOR_ID       0x4A54 // JT
//#define PRODUCT_ID      0x0001
//#define DEVICE_VER      0x0001
//#define MANUFACTURER    colsonkb
//#define PRODUCT         NeenPad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { F4, F5, F6, B1, F7 }
#define MATRIX_COL_PINS { B5, B4, E6, D7, C6 }

/* Encoder pins */
#define ENCODERS_PAD_A { B2 }
#define ENCODERS_PAD_B { B3 }

/* Encoder resolution */
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 10

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* number of backlight levels */
// #define BACKLIGHT_PIN D2
/* #define BACKLIGHT_PIN B6
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 5
#endif
*/

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#ifdef AUDIO_ENABLE
	#define AUDIO_PIN B6
	#define NO_MUSIC_MODE
#endif

#ifdef OLED_ENABLE
	#define OLED_FONT_H "keyboards/neenpad/lib/neenpadfont.c"
	#define OLED_TIMEOUT 120000
	#define OLED_UPDATE_INTERVAL 50
#endif

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN D4
// The number of LEDs connected
#define DRIVER_LED_TOTAL 27
// The number of LEDs connected
#define RGB_MATRIX_LED_COUNT 27

#ifdef RGB_DI_PIN
	#define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
	#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
	#define ENABLE_RGB_MATRIX_BREATHING
	#define ENABLE_RGB_MATRIX_BAND_SAT
	#define ENABLE_RGB_MATRIX_BAND_VAL
	#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
	#define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
	#define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
	#define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
	#define ENABLE_RGB_MATRIX_CYCLE_ALL
	#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
	#define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
	#define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
	#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN
	#define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
	#define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
	#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
	#define ENABLE_RGB_MATRIX_DUAL_BEACON
	#define ENABLE_RGB_MATRIX_RAINBOW_BEACON
	#define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
	#define ENABLE_RGB_MATRIX_RAINDROPS
	#define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
	#define ENABLE_RGB_MATRIX_HUE_BREATHING
	#define ENABLE_RGB_MATRIX_HUE_PENDULUM
	#define ENABLE_RGB_MATRIX_HUE_WAVE
	#define ENABLE_RGB_MATRIX_PIXEL_FRACTAL
	#define ENABLE_RGB_MATRIX_PIXEL_FLOW
	#define ENABLE_RGB_MATRIX_PIXEL_RAIN

	/*
	#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
	#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
	#define ENABLE_RGB_MATRIX_DIGITAL_RAIN
	*/

	/*
	#define RGB_MATRIX_KEYPRESSES
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS	
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS	
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS	
	#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS	
	#define ENABLE_RGB_MATRIX_SPLASH	
	#define ENABLE_RGB_MATRIX_MULTISPLASH	
	#define ENABLE_RGB_MATRIX_SOLID_SPLASH	
	#define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH	
	*/

	// #define RGBLED_NUM 10
	/*
	#define RGBLIGHT_HUE_STEP 8
	#define RGBLIGHT_SAT_STEP 8
	#define RGBLIGHT_VAL_STEP 8
	#define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	#define RGBLIGHT_EFFECT_SNAKE
	#define RGBLIGHT_EFFECT_KNIGHT
	#define RGBLIGHT_EFFECT_CHRISTMAS
	#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	#define RGBLIGHT_EFFECT_RGB_TEST
	#define RGBLIGHT_EFFECT_ALTERNATING
	#define RGBLIGHT_EFFECT_TWINKLE
	*/
#endif

#endif