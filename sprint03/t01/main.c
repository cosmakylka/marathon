#include <stdio.h>
#include "mx_ref_pointer.c"


int main(void) {
  int a = 10203;
  int *b = &a;
  int **c = &b;
  int ***d = &c;
  int ****e = &d;
  int *****f = &e;
  int ******g = &f;

  int target = 0;
  
  mx_ref_pointer(&target, g);
  
  printf("a = %d\n", a);
  printf("target = %d\n", target);

  return 0;
}
