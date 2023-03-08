#include QMK_KEYBOARD_H

#define l(x) KC_##x
#define r(x) S(KC_##x)

/* default keymap for hardware troubleshooting */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		l(A), l(B), l(C), l(D), l(F), l(F),                    r(F), r(E), r(D), r(C), r(B), r(A),
		l(G), l(H), l(I), l(J), l(K), l(L), l(M),        r(M), r(L), r(K), r(J), r(I), r(H), r(G),
		l(N), l(O), l(P), l(Q), l(R), l(S), l(T),        r(T), r(S), r(R), r(Q), r(P), r(O), r(N),
		            l(U),       l(V), l(W), l(X),        r(X), r(W), r(V),       r(U)             
	)
};
