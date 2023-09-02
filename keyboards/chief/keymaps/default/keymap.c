/* Copyright 2020 joshajohnson
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
#include QMK_KEYBOARD_H

#define _BASE   0
#define _LAYER1 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
       MO(_LAYER1),    MO(_LAYER1),    MO(_LAYER1),    LT(_LAYER1, KC_F24),  \
       CK_TOGG,    KC_F21,    KC_F21,    KC_MPLY,  \
       KC_F21,  KC_F22,  KC_F23,  KC_F24  \
    ),
    [_LAYER1] = LAYOUT(
       KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  \
       KC_F21,    KC_F21,    KC_MSTP,    KC_MPLY,  \
       KC_F21,  KC_F22,  KC_F23,  KC_F21  \
    ), 
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {

    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 2) {
        if (clockwise) {
            tap_code(KC_MNXT);
        } else {
            tap_code(KC_MPRV);
        }
    } else if (index == 3) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
    return true;
}