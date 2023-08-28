// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "config.h"
                                                                                                                            
enum iris_keycodes {
  GREEN = SAFE_RANGE,
  RED,
  BLUE,
  YELLOW,
};

enum iris_layers {
    _GREEN,
    _RED,
    _BLUE,
    _YELLOW,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_GREEN] = LAYOUT(
     /* GREEN LAYER
      *┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      *├   ESC  ┼  ` ~   ┼        ┼        ┼        ┼  [ {   ┤                          ├   ] }  ┼  - _   ┼  = +   ┼  ' "   ┼  \ |   ┼  ESC   ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├   TAB  ┼   Q    ┼   W    ┼   E    ┼   R    ┼   T    ┤                          ├   Y    ┼   U    ┼   I    ┼   O    ┼   P    ┼ BkSpc  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LShft ┼   A    ┼   S    ┼   D    ┼   F    ┼   G    ┤                          ├   H    ┼   J    ┼   K    ┼   L    ┼  ; :   ┼ RShft  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LCtrl ┼   Z    ┼   X    ┼   C    ┼   V    ┼   B    ┼  CpLk  ┤        ├        ┼   N    ┼   M    ┼   , <  ┼   . >  ┼  / ?   ┼ RCtrl  ┤
      *└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
      *                               ├  RED   ┼  LCMD  ┼  Space ┤                 ├  ENTER ┼  RAtl  ┼ BLUE   ┤
      *                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      */
         KC_ESC,  KC_GRV,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC,                            KC_RBRC, KC_MINS, KC_EQL,  KC_QUOT, KC_BSLS, KC_ESC,
         KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
         KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_RSFT,
         KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_CAPS,          XXXXXXX, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                          RED,     KC_LCMD, KC_SPC,                    KC_ENTER, KC_RALT,BLUE
  ),

  [_RED] = LAYOUT(
     /* RED LAYER
      *┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      *├   ESC  ┼        ┼        ┼        ┼        ┼        ┤                          ├        ┼        ┼        ┼        ┼        ┼  ESC   ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├   TAB  ┼   F1   ┼   F2   ┼   F3   ┼   F4   ┼   F5   ┤                          ├   1 !  ┼   2 @  ┼   3 #  ┼   4 $  ┼   5 %  ┼ BkSpc  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LShft ┼   F6   ┼   F7   ┼   F8   ┼   F9   ┼   F10  ┤                          ├   6 ^  ┼   7 &  ┼   8 *  ┼   9 (  ┼   0 )  ┼ RShft  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LCtrl ┼   F11  ┼   F12  ┼        ┼        ┼        ┼  CpLk  ┤        ├        ┼        ┼        ┼        ┼        ┼        ┼ RCtrl  ┤
      *└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
      *                               ├ GREEN  ┼  LCMD  ┼  Space ┤                 ├  ENTER ┼  RAtl  ┼ BLUE   ┤
      *                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      */
         _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
         _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,
         _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
         _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, _______,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
                                          GREEN , _______, _______,                   _______, _______, BLUE
  ),

  [_BLUE] = LAYOUT(
     /* BLUE LAYER
      *┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      *├   ESC  ┼        ┼        ┼        ┼        ┼ Yellow ┤                          ├        ┼  NLck  ┼  NP /  ┼  NP *  ┼  NP -  ┼  ESC   ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├   TAB  ┼        ┼  UP    ┼        ┼        ┼        ┤                          ├        ┼  NP 7  ┼  NP 8  ┼  NP 9  ┼  NP +  ┼ BkSpc  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LShft ┼  LEFT  ┼  DOWN  ┼  RIGHT ┼        ┼        ┤                          ├        ┼  NP 4  ┼  NP 5  ┼  NP 6  ┼ NP Ent ┼ RShft  ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      *├  LCtrl ┼        ┼        ┼        ┼        ┼        ┼  CpLk  ┤        ├        ┼  NP 0  ┼  NP 1  ┼  NP 2  ┼  NP 3  ┼  NP .  ┼ RCtrl  ┤
      *└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
      *                               ├   RED  ┼  LCMD  ┼  Space ┤                 ├  ENTER ┼  RAtl  ┼ GREEN  ┤
      *                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      */
         _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, YELLOW,                             XXXXXXX, KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS, _______,
         _______, XXXXXXX, KC_UP,   XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS, _______,
         _______, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,                            XXXXXXX, KC_KP_4, KC_KP_5, KC_KP_6, KC_PENT, _______,
         _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,          XXXXXXX, KC_KP_0, KC_KP_1, KC_KP_2, KC_KP_3, KC_PDOT, _______,
                                    RED,     _______, _______,                   _______, _______, GREEN
  ),

  [_YELLOW] = LAYOUT(
     /* YELLOW LAYER
      *┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
      *├        ┼        ┼        ┼        ┼        ┼ GREEN  ┤                          ├        ┼        ┼        ┼        ┼        ┼        ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├        ┼        ┼        ┼        ┼        ┼        ┤                          ├        ┼        ┼        ┼        ┼        ┼        ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
      *├        ┼        ┼        ┼        ┼ RGTOG  ┼ RGBCYC ┤                          ├        ┼        ┼        ┼        ┼        ┼        ┤
      *├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
      *├  Boot  ┼        ┼        ┼        ┼        ┼        ┼        ┤        ├        ┼        ┼        ┼        ┼        ┼        ┼        ┤
      *└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
      *                               ├        ┼        ┼        ┤                 ├        ┼        ┼        ┤
      *                               └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      */
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, GREEN,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, RGB_MOD,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
         QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                          XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GREEN:
            if (record->event.pressed) {
                layer_off(_RED);
                layer_off(_BLUE);
                layer_off(_YELLOW);
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color_all(0,255,0);
               //  rgb_matrix_set_color_all(RGB_GREEN);
            }
            return false;
        case RED:
            if (record->event.pressed) {
                layer_on(_RED);
                layer_off(_BLUE);
                layer_off(_YELLOW);
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color_all(255,0,0);
               //  rgb_matrix_set_color_all(RGB_RED);
            }
            return false;
        case BLUE:
            if (record->event.pressed) {
                layer_off(_RED);
                layer_on(_BLUE);
                layer_off(_YELLOW);
                rgb_matrix_set_color_all(0, 0, 0);
                rgb_matrix_set_color_all(0, 0, 255);
               //  rgb_matrix_set_color_all(RGB_BLUE);
            }
            return false;
        case YELLOW:
            if (record->event.pressed) {
                layer_off(_RED);
                layer_off(_BLUE);
                layer_on(_YELLOW);
                rgb_matrix_set_color_all(0, 0, 0);
                rgb_matrix_set_color_all(255, 255, 0);
               //  rgb_matrix_set_color_all(RGB_YELLOW);
            }
            return false;
    }
    return true;
}