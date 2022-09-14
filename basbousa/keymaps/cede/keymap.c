#include QMK_KEYBOARD_H


enum layers {
    _COLEMAK_DH,
    _NUM,
    _SYM,
    _FUN,
};


#define LA_SYM LT(_SYM,KC_BSPC)//MO(_SYM)
#define LA_NUM LT(_NUM,KC_TAB)//MO(_NUM)
#define LA_FUN MO(_FUN)
#define M_SS RALT(KC_S)
#define SAVE C(KC_S)
#define PASTE C(KC_V)
#define COPY C(KC_C)
#define OS_SHFT OSM(MOD_LSFT)
#define OS_CTRL OSM(MOD_LCTL)
#define OS_ALT OSM(MOD_LALT)
#define OS_GUI OSM(MOD_LGUI)

enum keycodes {
    // Custom oneshot mod implementation with no timers.
    M_AE = SAFE_RANGE,
    M_OE,
    M_UE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
   ┌───────────────────────────────────────────────────────────┐
   │ c a n a r y                                               │
   └───────────────────────────────────────────────────────────┘
   ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
   │    Q    │    W    │    F    │    P    │    B    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    J    │    L    │    U    │    Y    │    '    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    A    │    R    │    S    │    T    │    G    ├─╯                ╰─┤    M    │    N    │    E    │    I    │    O    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    Z    │    X    │    C    │    D    │    V    │                    │    K    │    H    │    ,    │    .    │    /    │
   └─────────┴─────────┴─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   SYM   │  SHIFT  │                    │  SPACE  │   NUM   │
                                 └─────────┴─────────┘                    └─────────┴─────────┘ */

  [_COLEMAK_DH] = LAYOUT_split_3x5_2(
     KC_W, KC_L, KC_Y, KC_P, KC_B,                   KC_Z, KC_F, KC_O,     KC_U,   KC_QUOTE,
     KC_C, KC_R, KC_S, KC_T, KC_G,                   KC_M, KC_N, KC_E,     KC_I,   KC_A,
     KC_Q, KC_J, KC_V, KC_D, KC_K,                   KC_X, KC_H, KC_SLASH, KC_COMM, KC_DOT,
                    LA_SYM, OS_SHFT,             KC_SPACE,LA_NUM
  ),
 /*
   ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸
   ┌───────────────────────────────────────────────────────────┐
   │ N U M                                                     │
   └───────────────────────────────────────────────────────────┘
   ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
   │    ;    │    #    │    @    │    _    │    !    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    *    │    -    │    =    │    +    │    `    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    :    │    \|   │    {}   │    ()   │    []   ├─╯                ╰─┤    3    │    2    │    1    │    0    │    4    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    ^    │    &    │    %    │    $    │    .    │                    │    7    │    6    │    5    │    9    │    8    │
   └─────────┴─────────┴─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   FUN   │  SHIFT  │                    │         │   NUM   │
                                 └─────────┴─────────┘                    └─────────┴─────────┘ */

   [_NUM] = LAYOUT_split_3x5_2(
     KC_SCOLON, KC_HASH, KC_AT,   KC_UNDS, KC_EXLM,             KC_ASTR, KC_MINS, KC_EQL, KC_PLUS, KC_GRV,
     KC_COLN,   KC_BSLS, KC_LCBR, KC_LPRN, KC_LBRC,             KC_3,    KC_2,    KC_1,   KC_0,    KC_4,
     KC_CIRC,   KC_AMPR, KC_PERC, KC_DLR,  KC_DOT,              KC_7,    KC_6,    KC_5,   KC_9,    KC_8,
                                    LA_FUN, KC_TRNS,          KC_NO, KC_TRNS
 ),

 /*
   ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

   ┌───────────────────────────────────────────────────────────┐
   │ S Y M                                                     │
   └───────────────────────────────────────────────────────────┘
   ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
   │   ESC   │    ü    │    ä    │    ö    │         │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │         │  PG UP  │    UP   │    ß    │         │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │   GUI   │   ALT   │   CTRL  │  SHIFT  │   SAVE  ├─╯                ╰─┤   HOME  │  LEFT   │   DOWN  │  RIGHT  │   END   │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │  ENTER  │  CAPS_W │   COPY  │  DEL    │  PASTE  │                    │         │ PG DOWN │         │         │         │
   └─────────┴─────────┴─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   FUN   │         │                    │   TAB   │  ENTER  │
                                 └─────────┴─────────┘                    └─────────┴─────────┘ */

   [_SYM] = LAYOUT_split_3x5_2(
     KC_ESC, M_UE,      M_AE,    M_OE,    KC_NO,               KC_NO,   KC_PGUP, KC_UP,   M_SS,    KC_NO,
     OS_GUI, OS_ALT,    OS_CTRL, OS_SHFT, SAVE,                KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,
     KC_ENT, CAPS_WORD, COPY,    KC_DEL, PASTE,               KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,
                                    KC_TRNS,KC_NO,            KC_TAB, KC_ENT
 ),
 /*
   ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

   ┌───────────────────────────────────────────────────────────┐
   │ F U N                                                     │
   └───────────────────────────────────────────────────────────┘
   ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
   │         │         │         │         │         │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │   F12   │    F7   │    F8   │    F9   │         │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │         │         │         │         │         ├─╯                ╰─┤   F11   │    F4   │    F5   │    F6   │         │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │         │         │         │         │         │                    │   F10   │    F1   │    F2   │    F3   │         │
   └─────────┴─────────┴─────────┼─────────┼─────────┤                    ├─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   FUN   │         │                    │         │         │
                                 └─────────┴─────────┘                    └─────────┴─────────┘ */

   [_FUN] = LAYOUT_split_3x5_2(
     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_F12, KC_F7, KC_F8, KC_F9, KC_NO,
     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_F11, KC_F4, KC_F5, KC_F6, KC_NO,
     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,            KC_F10, KC_F1, KC_F2, KC_F3, KC_NO,
                        KC_TRNS, KC_NO,            KC_NO,   KC_NO
 )
};


bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case M_AE:
            if (record->event.pressed) {
                SEND_STRING("\"a");
            }
            return false;
        case M_OE:
            if (record->event.pressed) {
                SEND_STRING("\"o");
            }
            return false;
        case M_UE:
            if (record->event.pressed) {
                SEND_STRING("\"u");
            }
            return false;
    }
    return process_record_user(keycode, record);
};

//const key_override_t backspace_override = {.trigger_mods          = MOD_MASK_SHIFT,
//                                   .layers                 = ~0,
//                                   .suppressed_mods        = MOD_MASK_SHIFT,
//                                   .options                = ko_options_default,
//                                   .trigger                = KC_BSPACE,
//                                   .replacement            = KC_DELETE,
//                                   .enabled                = NULL};

const key_override_t lbracket_override = {.trigger_mods          = MOD_MASK_SHIFT,
                                   .layers                 = ~0,
                                   .suppressed_mods        = MOD_MASK_SHIFT,
                                   .options                = ko_options_default,
                                   .trigger                = KC_LBRACKET,
                                   .replacement            = KC_RBRACKET,
                                   .enabled                = NULL};

const key_override_t hbracket_override = {.trigger_mods          = MOD_MASK_SHIFT,
                                   .layers                 = ~0,
                                   .suppressed_mods        = MOD_MASK_SHIFT,
                                   .options                = ko_options_default,
                                   .trigger                = LSFT(KC_LBRACKET),
                                   .replacement            = LSFT(KC_RBRACKET),
                                   .enabled                = NULL};

const key_override_t bracket_override = ko_make_basic(MOD_MASK_SHIFT, LSFT(KC_9), LSFT(KC_0));

const key_override_t **key_overrides = (const key_override_t *[]){
    //&backspace_override,
    &lbracket_override,
    &hbracket_override,
    &bracket_override,
    NULL
};

