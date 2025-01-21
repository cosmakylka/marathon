#include <unistd.h>

void mx_print_alphabet(void) {
    for (char upper = 'A', lower = 'b'; upper <= 'Z' && lower <= 'z'; upper += 2, lower += 2) {
        mx_printchar(upper);
        mx_printchar(lower);  
    }
}

