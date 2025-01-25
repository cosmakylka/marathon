void mx_str_reverse(char *s) {
  int l = mx_strlen(s) - 1;
  if(s){
    for (int i = 0; i <= l / 2; i++) {
      mx_swap_char(&s[i], &s[l-i]);
    }
  }
}
