#include <stdio.h>
#include "mx_isupper.c"
#include "mx_islower.c"
#include "mx_toupper.c"
#include "mx_tolower.c"
#include "mx_reverse_case.c"


int main(void) {
   char test[] = "sOsAl";
    printf("before: %s\n", test);
    mx_reverse_case(test);
    printf("after: %s\n", test);
}
