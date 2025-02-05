#include "duplicate.h"
#include "mx_del_dup_sarr.c"
#include "mx_copy_int_arr.c"
#include <stdio.h>

void print_array(const char *msg, t_intarr *arr) {
    if (!arr || !arr->arr) {
        printf("%s: NULL or invalid array\n", msg);
        return;
    }
    
    printf("%s (size=%d): ", msg, arr->size);
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->arr[i]);
    }
    printf("\n");
}

int main(void) {
    // Test 1: Normal case with duplicates
    printf("\nTest 1: Normal case with duplicates\n");
    int test1[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    t_intarr src1 = {test1, 9};
    t_intarr *result1 = mx_del_dup_sarr(&src1);
    print_array("Original", &src1);
    print_array("After removing duplicates", result1);
    
    // Test 2: Array with no duplicates
    printf("\nTest 2: Array with no duplicates\n");
    int test2[] = {1, 2, 3, 4, 5};
    t_intarr src2 = {test2, 5};
    t_intarr *result2 = mx_del_dup_sarr(&src2);
    print_array("Original", &src2);
    print_array("After removing duplicates", result2);
    
    // Test 3: Array with all same elements
    printf("\nTest 3: Array with all same elements\n");
    int test3[] = {1, 1, 1, 1, 1};
    t_intarr src3 = {test3, 5};
    t_intarr *result3 = mx_del_dup_sarr(&src3);
    print_array("Original", &src3);
    print_array("After removing duplicates", result3);
    
    // Test 4: Single element array
    printf("\nTest 4: Single element array\n");
    int test4[] = {1};
    t_intarr src4 = {test4, 1};
    t_intarr *result4 = mx_del_dup_sarr(&src4);
    print_array("Original", &src4);
    print_array("After removing duplicates", result4);
    
    // Test 5: NULL pointer test
    printf("\nTest 5: NULL pointer test\n");
    t_intarr *result5 = mx_del_dup_sarr(NULL);
    if (result5 == NULL) {
        printf("NULL test passed: returned NULL for NULL input\n");
    }
    
    // Test 6: Copy array test
    printf("\nTest 6: Copy array test\n");
    int *copied = mx_copy_int_arr(test1, 9);
    if (copied) {
        printf("Copy successful. First few elements: %d %d %d\n", 
               copied[0], copied[1], copied[2]);
        free(copied);
    }
    
    // Free allocated memory
    if (result1) {
        free(result1->arr);
        free(result1);
    }
    if (result2) {
        free(result2->arr);
        free(result2);
    }
    if (result3) {
        free(result3->arr);
        free(result3);
    }
    if (result4) {
        free(result4->arr);
        free(result4);
    }
    
    return 0;
}
