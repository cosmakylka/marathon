#include "mx_print_arr_int.c"
#include "mx_printint.c"
#include "mx_printchar.c"
#include <unistd.h>

int main(void){
    int test_array[] = {42, -7, 123, 0, -456};
    int size = sizeof(test_array) / sizeof(test_array[0]);
    mx_print_arr_int(test_array, size);

    return 0;

}

