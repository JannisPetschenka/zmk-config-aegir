#pragma once

#define DE_AT RA(L)        // @
#define DE_EURO RA(E)      // €
#define DE_ACUT EQUAL      // ´
#define DE_LPRN LS(N8)     // (
#define DE_RPRN LS(N9)     // )
#define DE_LCBR RA(N8)     // {
#define DE_RCBR RA(N9)     // }
#define DE_LBRC RA(N5)     // [
#define DE_RBRC RA(N6)     // ]
#define DE_HASH BSLH       // #
#define DE_DQUO LS(N2)     // "
#define DE_QUOT LS(BSLH)   // '
#define DE_PIPE RA(N7)     // |
#define DE_CARET GRAVE     // ^
#define DE_SCLN LS(COMMA)  // ;
#define DE_COLN LS(DOT)    // :
#define DE_BSLS LS(RA(N7)) // (backslash)
#define DE_SLSH LS(N7)     // /
#define DE_RABK LS(GRAVE)  // >
#define DE_LABK GRAVE      // <
#define DE_MINS SLASH      // -
#define DE_UNDS LS(SLASH)  // _
#define DE_ASTR LS(RBKT)   // *
#define DE_PLUS RBKT       // +
#define DE_EQL LS(N0)      // =
#define DE_TILDE RA(N)     // ~
#define DE_DLR LS(N4)      // $
#define DE_PERC LS(N5)     // %
#define DE_EXCL LS(N1)     // !
#define DE_QUES LS(MINUS)  // ?
#define DE_SECT LS(N3)     // §
#define DE_AMP LS(N6)      // &

#define DE_AE APOS      // ä
#define DE_UE LBKT      // ü
#define DE_OE SEMICOLON // ö
#define DE_SS MINUS     // ß

// linux

#define LN_DE_LBRC RA(N8)    // [
#define LN_DE_RBRC RA(N9)    // ]
#define LN_DE_LPRN LS(N8)    // (
#define LN_DE_RPRN LS(N9)    // )
#define LN_DE_LCBR RA(N7)    // {
#define LN_DE_RCBR RA(N0)    // }
#define LN_TILDE RA(DE_PLUS) // ~
#define LN_DE_LABK NUBS      // <
#define LN_DE_RABK LS(NUBS)  // >
#define LN_DE_PIPE RA(NUBS)  // |
#define LN_DE_BSLS RA(MINUS) // (backslash)
#define LN_DE_AT RA(Q)       // @
