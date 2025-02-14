#include "neenpad.h"
#include QMK_KEYBOARD_H

enum layer_names {
    _BASE,
    _WASD,
    _ARRW,
    _RGB
};


// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKSONG1 = SAFE_RANGE,
    QMKSONG2,
    QMKSONG3,
    QMKSONG4
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     *     ┌───┬───┬───┬───┐
     *     │NL │ / │ * │ - │
     *     ├───┼───┼───┼───┤
     *     │ 7 │ 8 │ 9 │   │
     * ┌───┼───┼───┼───┤ + │
     * │(R)│ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┤
     * │Fn1│ 1 │ 2 │ 3 │   │
     * ├───┼───┴───┼───┤Ent│
     * │Fn2│   0   │ . │   │
     * └───┴───────┴───┴───┘
     */
	[_BASE] = LAYOUT(
				AU_TOGG, KC_PSLS,KC_PAST,KC_PMNS, 
				QMKSONG1,KC_P8, 	KC_P9, 
		KC_MUTE,QMKSONG2, 	KC_P5, 	KC_P6, 	KC_PPLS, 
		TO(1), 	QMKSONG4, 	KC_P2, 	KC_P3, 	KC_PENT, 
		TO(3), 	QMKSONG3, 			KC_PDOT
	),

    /*
     *     ┌───┬───┬───┬───┐
     *     │ 1 │ 2 │ 3 │Esc│
     *     ├───┼───┼───┼───┤
     *     │ Q │ W │ E │   │
     * ┌───┼───┼───┼───┤Sft│
     * │(R)│ A │ S │ D │   │
     * ├───┼───┼───┼───┼───┤
     * │   │ Z │ X │ C │   │
     * ├───┼───┴───┼───┤Spc│
     * │   │ LCtrl │Alt│   │
     * └───┴───────┴───┴───┘
     */
	[_WASD] = LAYOUT(
				KC_1, 	KC_2,	KC_3,	KC_ESC, 
				KC_Q,	KC_W, 	KC_E, 
		KC_TRNS,KC_A, 	KC_S, 	KC_D, 	KC_LSFT, 
		TO(2),	KC_Z, 	KC_X, 	KC_C, 	KC_SPC, 
		TO(0),	KC_LCTL,		KC_LALT 
	),
	
	    /*
     *     ┌───┬───┬───┬───┐
     *     │NLk│ F1│ F2│Bck│
     *     ├───┼───┼───┼───┤
     *     │Hom│ ↑ │PgU│   │
     * ┌───┼───┼───┼───┤ + │
     * │(R)│ ← │Prt│ → │   │
     * ├───┼───┼───┼───┼───┤
     * │   │End│ ↓ │PgD│   │
     * ├───┼───┴───┼───┤Ent│
     * │   │Insert │Del│   │
     * └───┴───────┴───┴───┘
     */
	[_ARRW] = LAYOUT(
				KC_NUM,	KC_F1,	KC_F2,	KC_BSPC, 
				KC_HOME,KC_UP, 	KC_PGUP, 
		KC_TRNS,KC_LEFT,KC_PSCR,KC_RGHT,KC_PPLS, 
		TO(3),	KC_END, KC_DOWN,KC_PGDN,KC_ENT, 
		TO(1),	KC_INS,			KC_DEL 
	),
	
	    /*
     *     ┌───┬───┬───┬───┐
     *     │   │   │   │   │
     *     ├───┼───┼───┼───┤
     *     │   │   │   │   │
     * ┌───┼───┼───┼───┤   │
     * │   │   │   │   │   │
     * ├───┼───┼───┼───┼───┤
     * │   │   │   │   │   │
     * ├───┼───┴───┼───┤   │
     * │   │       │   │   │
     * └───┴───────┴───┴───┘
     */
	[_RGB] = LAYOUT(
				KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, 
				RGB_HUD,RGB_SPI,RGB_HUI, 
		KC_TRNS,RGB_RMOD,RGB_TOG,RGB_MOD,KC_TRNS, 
		TO(0),	RGB_VAD,RGB_SPD,RGB_VAI,KC_TRNS, 
		TO(2),	RGB_SAD,		RGB_SAI
		
		),

};


float song1[][2] = SONG(PORTAL);
float song2[][2] = SONG(XMEN_FULL);
float song3[][2] = SONG(EVERQUEST_FULL);
float song4[][2] = SONG(MEGALOVANIA);
/*
float song5[][2] = SONG(WORKMAN_SOUND);
float song6[][2] = SONG(CHROMATIC_SOUND);
float song7[][2] = SONG(GUITAR_SOUND);
float song8[][2] = SONG(VIOLIN_SOUND);
float song9[][2] = SONG(MAJOR_SOUND);
float song10[][2] = SONG(MINOR_SOUND);
float song11[][2] = SONG(ODE_TO_JOY);
float song12[][2] = SONG(ROCK_A_BYE_BABY);
float song13[][2] = SONG(CAMPANELLA);
float song14[][2] = SONG(FANTASIE_IMPROMPTU);
float song15[][2] = SONG(NOCTURNE_OP_9_NO_1);
*/


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKSONG1:
            if (record->event.pressed) {
                // when keycode QMKSONG1 is pressed
                PLAY_SONG(song1);
            }
            break;
		case QMKSONG2:
            if (record->event.pressed) {
                // when keycode QMKSONG2 is pressed
                PLAY_SONG(song2);
            }
            break; 
        case QMKSONG3:
            if (record->event.pressed) {
                // when keycode QMKSONG3 is pressed
                PLAY_SONG(song3);
            }
            break;
        case QMKSONG4:
            if (record->event.pressed) {
                // when keycode QMKSONG4 is pressed
                PLAY_SONG(song4);
            }
            break;
    }
    return true;
}


#ifdef ENCODER_ENABLE
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false;
    }

    switch (index) {
        case 0:
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        break;
//        case 1:
//            if (clockwise) {
//                tap_code(KC_BRIU);
//            } else {
//                tap_code(KC_BRID);
//            }
//        break;
    }
    return true;
}
#endif

/*
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][1] = {
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_WASD] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_ARRW] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_RGB]  = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif
*/

/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}
*/

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}