#include <stdio.h>
#include "mx_strcmp.c"


int main(void) {
  const char t1[] = "sosal";
  const char t2[] = "sosal";
  const char t3[] = "da";
  const char t4[] = "sus";
  
  printf("%s and %s: %d\n", t1, t2, mx_strcmp(t1, t2));
  printf("%s and %s: %d\n", t1, t3, mx_strcmp(t1, t3));
  printf("%s and %s: %d\n", t1, t4, mx_strcmp(t1, t4));
  printf("%s and %s: %d\n", t4, t1, mx_strcmp(t4, t1));
  
}
