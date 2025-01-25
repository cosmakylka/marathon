#include <stdio.h>
#include <stdlib.h>
#include "mx_pow.c"

int main(void) {
    printf("Test 1: 3^3 = %.2f (Expected: 27.00)\n", mx_pow(3, 3));
    printf("Test 2: 2.5^3 = %.2f (Expected: 15.63)\n", mx_pow(2.5, 3));
    printf("Test 3: 2^0 = %.2f (Expected: 1.00)\n", mx_pow(2, 0));
    printf("Test 4: 5^2 = %.2f (Expected: 25.00)\n", mx_pow(5, 2));
    printf("Test 5: 1.5^4 = %.2f (Expected: 5.06)\n", mx_pow(1.5, 4));

    return 0;
}
