#include <unistd.h>
#include "mx_printchar.c"
#include "mx_printint.c"


int main(void) {
  mx_printint(228);
  mx_printchar('\n');
  mx_printint(420);
  mx_printchar('\n');
  mx_printint(1337);
  mx_printchar('\n');
  mx_printint(-1337);
  mx_printchar('\n');
  mx_printint(-2147483647);
  mx_printchar('\n');
  mx_printint(2147483647);
  mx_printchar('\n');
}
