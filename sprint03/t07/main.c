#include <stdio.h>
#include "mx_printchar.c"
#include "mx_str_separate.c"

int main(void) {
  mx_str_separate("game over", ' ');
  mx_str_separate("game over", 'm');
  mx_str_separate("game over", 'M');
  return 0;
}
