void mx_ref_pointer(int* i, int ******ptr) {
  *i = ******ptr;
  printf("i = %d\n", *i);
}
