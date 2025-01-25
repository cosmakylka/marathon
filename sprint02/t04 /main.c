#include <stdio.h>
#include "mx_islower.c"


int main(void) {
  char t1 = 'N';
  char t2 = '1';
  char t3 = 'g';
  
  bool r1 = mx_islower(t1);
  bool r2 = mx_islower(t2);
  bool r3 = mx_islower(t3);
  
  printf("%d\n", r1);
  printf("%d\n", r2);
  printf("%d\n", r3);
  
}
