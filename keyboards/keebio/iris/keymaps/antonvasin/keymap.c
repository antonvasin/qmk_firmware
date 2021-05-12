#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2

#define LCTL_ESC LCTL_T(KC_ESC)
#define LOWER TT(1)
#define RAISE MO(2)

#define RU_OQUOTE LSA(KC_EQL)
#define RU_CQUOTE A(KC_EQL)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
//     ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_EQL,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        LCTL_ESC, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,     KC_L,   KC_SCLN, KC_QUOT,
//     ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_NO,            KC_BSPC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_MINS,
//     └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       RAISE,   KC_LGUI, KC_SPC,                    KC_ENT,  LOWER,   KC_LALT
//                                    └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      ),

  [_LOWER] = LAYOUT(
//     ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LT,                              KC_GT,   KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_PMNS,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PAST, KC_PSLS,
//     ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_LCBR, _______,          _______, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_PDOT, KC_PENT,
//     └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, KC_DEL,                    _______, _______, KC_P0
//                                    └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      ),

  [_RAISE] = LAYOUT(
//     ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
        KC_BRID, KC_BRIU, KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, _______, HYPR(KC_T),                         _______, _______, _______, _______, _______, _______,
//     ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, HYPR(KC_S), _______, _______, A(KC_LBRC),                      LSA(KC_LBRC), KC_DOWN, KC_UP, _______, _______, _______,
//     ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        _______, _______, _______, _______, HYPR(KC_V), RU_OQUOTE, _______,     _______, RU_CQUOTE, HYPR(KC_N), _______, _______, HYPR(KC_SLSH), _______
//     └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                       _______, _______, _______,                   _______, _______, _______
//                                    └────────┴────────┴────────┘                 └────────┴────────┴────────┘
      )

};
