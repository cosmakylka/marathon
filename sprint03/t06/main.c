#include <stdio.h>
#include "mx_strcpy.c"

int main(void) {
  char src[] = "hello world";
  char dst[50];
  mx_strcpy(dst, src);
  printf("copy %s\n", dst);
  
}
