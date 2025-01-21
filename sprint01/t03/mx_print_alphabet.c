#include <unistd.h>
#include "mx_printchar.c"

void mx_print_alphabet(void) {
    for (char upper = 'A', lower = 'b'; upper <= 'Z' && lower <= 'z'; upper++, lower += 2) {
        mx_printchar(upper);
        mx_printchar(lower);  
    }

    mx_printchar('\n');

