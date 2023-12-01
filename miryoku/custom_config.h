// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// #define MIRYOKU_KEYBOARD_CORNE needed if doing local build

#define MIRYOKU_NAV_INVERTEDT
#define MIRYOKU_CLIPBOARD_WIN
#define MIRYOKU_LAYERS_FLIP
#define MIRYOKU_KLUDGE_MOUSEKEYSPR

//#define MIRYOKU_KLUDGE_TOPROWCOMBOS
//#define MIRYOKU_KLUDGE_BOTTOMROWCOMBOS


// Dhorf-awmod5
#define MIRYOKU_LAYER_BASE \
&kp Z,             &kp L,             &kp H,             &kp W,             &kp K,             &kp J,             &kp F,             &kp O,             &kp U,             &kp COMMA,          \
U_MT(LGUI, S),     U_MT(LALT, R),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp M,             &kp Y,             U_MT(LSHFT, C),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, A),      \
U_LT(U_BUTTON, V), U_MT(RALT, X),     &kp B,             &kp D,             &kp Q,             &kp G,             &kp P,             &kp SQT,           U_MT(RALT, SEMI),  U_LT(U_BUTTON, DOT),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE),U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, DEL),  U_LT(U_MEDIA, BSPC),U_NP,             U_NP


// Dhorf-awmod4
// #define MIRYOKU_LAYER_BASE \
// &kp Z,             &kp H,             &kp L,             &kp K,             &kp Q,             &kp J,             &kp F,             &kp U,             &kp O,             &kp COMMA,          \
// U_MT(LGUI, S),     U_MT(LALT, R),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp W,             &kp Y,             U_MT(LSHFT, C),    U_MT(LCTRL, E),    U_MT(LALT, A),     U_MT(LGUI, I),      \
// U_LT(U_BUTTON, V), U_MT(RALT, X),     &kp M,             &kp D,             &kp B,             &kp G,             &kp P,             &kp SQT,           U_MT(RALT, SEMI),  U_LT(U_BUTTON, DOT),\
// U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE),U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, DEL),  U_LT(U_MEDIA, BSPC),U_NP,             U_NP


// Dhorf-awmod3
// #define MIRYOKU_LAYER_BASE \
// &kp Z,             &kp H,             &kp L,             &kp K,             &kp Q,             &kp J,             &kp F,             &kp O,             &kp U,             &kp COMMA,          \
// U_MT(LGUI, S),     U_MT(LALT, R),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp W,             &kp Y,             U_MT(LSHFT, C),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, A),      \
// U_LT(U_BUTTON, V), U_MT(RALT, X),     &kp M,             &kp D,             &kp B,             &kp G,             &kp P,             &kp SQT,           U_MT(RALT, SEMI),  U_LT(U_BUTTON, DOT),\
// U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE),U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, DEL),  U_LT(U_MEDIA, BSPC),U_NP,             U_NP


// Dhorf-awmod1
// #define MIRYOKU_LAYER_BASE \
// &kp Z,             &kp L,             &kp H,             &kp K,             &kp Q,             &kp J,             &kp F,             &kp O,             &kp U,             &kp COMMA,          \
// U_MT(LGUI, S),     U_MT(LALT, R),     U_MT(LCTRL, N),    U_MT(LSHFT, T),    &kp W,             &kp Y,             U_MT(LSHFT, C),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, A),      \
// U_LT(U_BUTTON, V), U_MT(RALT, X),     &kp M,             &kp D,             &kp B,             &kp P,             &kp G,             &kp SQT,           U_MT(RALT, SEMI),  U_LT(U_BUTTON, DOT),\
// U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE),U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, DEL),  U_LT(U_MEDIA, BSPC),U_NP,             U_NP

// #define MIRYOKU_ALTERNATIVES_BASE_COLEMAKDH_FLIP \
// customized

#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_FUN, ESC),  U_LT(U_NUM, SPACE),U_LT(U_SYM, TAB),  U_LT(U_MOUSE, RET),U_LT(U_NAV, DEL),  U_LT(U_MEDIA, BSPC),U_NP,              U_NP



//#define MIRYOKU_ALTERNATIVES_TAP_COLEMAKDH_FLIP \

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp DEL,           &kp BSPC,          &kp RET,           &kp TAB,           &kp SPACE,         &kp ESC,           U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_NAV_INVERTEDT_FLIP \

#define MIRYOKU_LAYER_NAV \
&kp PG_UP,         &kp HOME,          &kp UP,            &kp END,           &kp INS,           U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp PG_DN,         &kp LEFT,          &kp DOWN,          &kp RIGHT,         &u_caps_word,      U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_NAV,       &u_to_U_NUM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp ESC,           &kp SPACE,         &kp TAB,           &kp RET,           U_NA,              &kp BSPC,           U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_MOUSE_INVERTEDT_FLIP \

#define MIRYOKU_LAYER_MOUSE \
U_WH_U,            U_WH_L,            U_MS_U,            U_WH_R,            U_NU,              U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_WH_D,            U_MS_L,            U_MS_D,            U_MS_R,            U_NU,              U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              &u_to_U_MOUSE,     &u_to_U_SYM,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_MEDIA_INVERTEDT_FLIP \

#define MIRYOKU_LAYER_MEDIA \
U_RGB_HUI,         U_RGB_SAI,         &kp C_VOL_UP,      U_RGB_BRI,         U_RGB_TOG,         U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
U_RGB_EFF,         &kp C_PREV,        &kp C_VOL_DN,      &kp C_NEXT,        U_EP_TOG,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&u_bt_sel_0,       &u_bt_sel_1,       &u_bt_sel_2,       &u_bt_sel_3,       &u_out_tog,        U_NA,              &u_to_U_MEDIA,     &u_to_U_FUN,       &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp C_MUTE,        &kp C_PP,          &kp C_STOP,        U_NA,              U_NA,              U_NA,              U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_NUM_FLIP \

#define MIRYOKU_LAYER_NUM \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBKT,          &kp N7,            &kp N8,            &kp N9,            &kp RBKT,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp EQUAL,         &kp N4,            &kp N5,            &kp N6,            &kp SEMI,          \
U_NA,              &kp RALT,          &u_to_U_NAV,       &u_to_U_NUM,       U_NA,              &kp BSLH,          &kp N1,            &kp N2,            &kp N3,            &kp GRAVE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp MINUS,         &kp N0,            &kp DOT,           U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_SYM_FLIP \

#define MIRYOKU_LAYER_SYM \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp LBRC,          &kp AMPS,          &kp ASTRK,         &kp LPAR,          &kp RBRC,          \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp PLUS,          &kp DLLR,          &kp PRCNT,         &kp CARET,         &kp COLON,         \
U_NA,              &kp RALT,          &u_to_U_MOUSE,     &u_to_U_SYM,       U_NA,              &kp PIPE,          &kp EXCL,          &kp AT,            &kp HASH,          &kp TILDE,         \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp UNDER,         &kp LPAR,          &kp RPAR,          U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_FUN_FLIP \

#define MIRYOKU_LAYER_FUN \
U_BOOT,            &u_to_U_TAP,       &u_to_U_EXTRA,     &u_to_U_BASE,      U_NA,              &kp PSCRN,         &kp F7,            &kp F8,            &kp F9,            &kp F12,           \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NA,              &kp SLCK,          &kp F4,            &kp F5,            &kp F6,            &kp F11,           \
&u_to_U_GAME,      &kp RALT,          &u_to_U_MEDIA,     &u_to_U_FUN,       U_NA,              &kp PAUSE_BREAK,   &kp F1,            &kp F2,            &kp F3,            &kp F10,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp SPACE,         &kp K_APP,         U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_BUTTON \

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         U_NU,              U_NU,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP


// #define MIRYOKU_ALTERNATIVES_GAME_FLIP \

#define MIRYOKU_LAYER_GAME \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp TAB,           &kp C,             &kp W,             &kp E,             U_MT(LCTRL, R),    U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              U_MT(X, V),        &kp G,             &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP

// #define MIRYOKU_ALTERNATIVES_GAME \
// &kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
// &kp TAB,           &kp C,             &kp W,             &kp E,             U_MT(LCTRL, R),    U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
// &kp LSHFT,         &kp A,             &kp S,             &kp D,             &kp F,             U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
// U_NP,              U_NP,              U_MT(X, V),        &kp G,             &kp SPACE,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Game")

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME   10
