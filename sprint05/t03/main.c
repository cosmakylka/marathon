#include <stdio.h>
#include "mx_factorial_iter.c"

int main(void) {
    printf("%d\n", mx_factorial_iter(2)); // Outputs: 2
    printf("%d\n", mx_factorial_iter(5)); // Outputs: 120
    printf("%d\n", mx_factorial_iter(-1)); // Outputs: 0 (error case)
    printf("%d\n", mx_factorial_iter(20)); // Outputs: 0 (overflow case)
    return 0;
}

