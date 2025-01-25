#include <stdio.h>
#include "mx_tolower.c"

int main(void) {
  char t1 = 'N';
  char t2 = '1';
  char t3 = 'g';
  
  char r1 = mx_tolower(t1);
  char r2 = mx_tolower(t2);
  char r3 = mx_tolower(t3);
  
  printf("%c\n", r1);
  printf("%c\n", r2);
  printf("%c\n", r3);
  
}
