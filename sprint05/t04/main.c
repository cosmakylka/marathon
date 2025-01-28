#include <stdio.h>
#include "mx_factorial_rec.c"

// Example usage
int main(void) {
    printf("%d\n", mx_factorial_rec(2));  // Output: 2
    printf("%d\n", mx_factorial_rec(5));  // Output: 120
    printf("%d\n", mx_factorial_rec(-1)); // Output: 0 (error case)
    printf("%d\n", mx_factorial_rec(13)); // Output: 0 (overflow case)
    return 0;
}


