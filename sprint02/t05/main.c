#include <stdio.h>
#include "mx_isupper.c"


int main(void) {
  char t1 = 'N';
  char t2 = '1';
  char t3 = 'g';
  
  bool r1 = mx_isupper(t1);
  bool r2 = mx_isupper(t2);
  bool r3 = mx_isupper(t3);
  
  printf("%d\n", r1);
  printf("%d\n", r2);
  printf("%d\n", r3);
  
}
