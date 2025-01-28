#include <unistd.h>
#include "mx_isspace.c"
#include "mx_isdigit.c"
#include "mx_printchar.c"
#include "mx_printint.c"
#include "mx_atoi.c"
#include "mx_sum_args.c"


int main(int argc, char *argv[]) {
    int result = mx_sum_args(argc, argv);
    mx_printint(result);
    mx_printchar('\n');
    return 0;
}

