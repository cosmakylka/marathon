#include <stdio.h>
#include "mx_isspace.c"


int main(void) {
  char t1 = 'N';
  char t2 = '1';
  char t3 = ' ';
  
  bool r1 = mx_isspace(t1);
  bool r2 = mx_isspace(t2);
  bool r3 = mx_isspace(t3);
  
  printf("%d\n", r1);
  printf("%d\n", r2);
  printf("%d\n", r3);
  
}
