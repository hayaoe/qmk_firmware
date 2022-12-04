#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │ A │ B │ C │ D │ E │ F │ G │ H │ I │ J │ K │ L │
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT_abuku_zeta(
        KC_ESC,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,     KC_SCLN,  KC_BSPC,    
        KC_TAB,   KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,     KC_O,     KC_QUOT, 
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT, 
        KC_LCTL,  KC_LALT,          MO(1),   KC_SPC,           KC_B,   KC_ENT,  MO(2),              KC_RGUI,  KC_LALT 
    ),
    [1] = LAYOUT_abuku_zeta(
        KC_ESC,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,     KC_BSPC,      
        KC_TAB,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_F11,   KC_F12, 
        KC_LSFT,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_RSFT, 
        KC_LCTL,  KC_LALT,          MO(1),   KC_SPC,           XXXXXXX, KC_ENT,  MO(3),             KC_RGUI,  KC_LALT 
    ),
    [2] = LAYOUT_abuku_zeta(
        KC_ESC,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN,  KC_BSPC,     
        KC_TAB,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR,  KC_PIPE,  KC_GRV, 
        KC_LSFT,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC,  KC_BSLS,  KC_RSFT, 
        KC_LCTL,  KC_LALT,          MO(3),   KC_SPC,           XXXXXXX, KC_ENT,  MO(2),             KC_RGUI,  KC_LALT 
    ),
};
