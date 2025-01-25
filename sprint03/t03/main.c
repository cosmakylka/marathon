#include <stdio.h>
#include "mx_swap_char.c"


int main(void) {
  char str[] = "ONE";
  printf("%s\n", str);
  mx_swap_char(&str[0], &str[1]);
  printf("%s\n", str);
  mx_swap_char(&str[1], &str[2]);
  printf("%s\n", str);
  
}
