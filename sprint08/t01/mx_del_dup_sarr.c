#include "duplicate.h"

static int count_unique(const int *arr, int size) {
    if (!arr || size <= 0) return 0;
    
    int unique_count = 0;
    for (int i = 0; i < size; i++) {
        int is_unique = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) unique_count++;
    }
    return unique_count;
}

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src == NULL || src->arr == NULL || src->size <= 0) {
        return NULL;
    }

    t_intarr *new_struct = (t_intarr *)malloc(sizeof(t_intarr));
    if (new_struct == NULL) {
        return NULL;
    }

    int unique_size = count_unique(src->arr, src->size);
    
    new_struct->arr = (int *)malloc(unique_size * sizeof(int));
    if (new_struct->arr == NULL) {
        free(new_struct);
        return NULL;
    }
    new_struct->size = unique_size;

    int unique_index = 0;
    for (int i = 0; i < src->size; i++) {
        int is_unique = 1;
        for (int j = 0; j < unique_index; j++) {
            if (src->arr[i] == new_struct->arr[j]) {
                is_unique = 0;
                break;
            }
        }
        if (is_unique) {
            new_struct->arr[unique_index++] = src->arr[i];
        }
    }

    return new_struct;
}
