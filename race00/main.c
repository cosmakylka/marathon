#include <stdio.h>
#include "mx_printchar.c"
#include "mx_pyramid.c"
#include "mx_cube.c"

int main(void) {
    // Test cases for the mx_pyramid function
    printf("n = 6:\n");
    mx_pyramid(6);

    printf("\nn = 4:\n");
    mx_pyramid(4);

    printf("\nn = 3 (nothing):\n");
    mx_pyramid(3);

    printf("\nn = 1 (nothing):\n");
    mx_pyramid(1);

    printf("\nwith n = 8:\n");
    mx_pyramid(8);
    
    printf("n = 6:\n");
    mx_cube(6);

    printf("\nn = 4:\n");
    mx_cube(4);

    printf("\nn = 3 (nothing):\n");
    mx_cube(3);

    printf("\nn = 1 (nothing):\n");
    mx_cube(1);

    printf("\nwith n = 8:\n");
    mx_cube(8);

    return 0;
}

