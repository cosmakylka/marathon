#include <stdbool.h>

void mx_reverse_case(char *c) {
  if (c == NULL) return;
  int i = 0;
    for (i = 0; c[i] != '\0'; i++) {
        if (mx_isupper(c[i]) == 1) {
            c[i] = mx_tolower(c[i]);
        }
        else if (mx_islower(c[i]) == 1) {
            c[i] = mx_toupper(c[i]);
        }
    }
}
