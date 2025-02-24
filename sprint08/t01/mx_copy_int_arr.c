#include <stdlib.h>
#include "duplicate.h"

int *mx_copy_int_arr(const int *src, int size) {
    if (src == NULL || size <= 0) {
        return NULL;
    }

    int *new_arr = malloc(size * sizeof(int));
    
    if (new_arr == NULL) {
        return NULL;
    }

    for (int i = 0; i < size; i++) {
        new_arr[i] = src[i];
    }

    return new_arr;
}
