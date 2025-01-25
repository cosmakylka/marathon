#include <stdio.h>
#include "mx_isdigit.c"


int main(void) {
  char t1 = 'N';
  char t2 = '1';
  int t3 = 80;
  
  bool r1 = mx_isdigit(t1);
  bool r2 = mx_isdigit(t2);
  bool r3 = mx_isdigit(t3);
  
  printf("%d\n", r1);
  printf("%d\n", r2);
  printf("%d\n", r3);
  
}
