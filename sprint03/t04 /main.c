#include <stdio.h>
#include "mx_strlen.c"
#include "mx_swap_char.c"
#include "mx_str_reverse.c"

int main(void) {
  char str[] = "game over";
  printf("%s\n", str);
  mx_str_reverse(str);
  printf("%s\n", str);
}
