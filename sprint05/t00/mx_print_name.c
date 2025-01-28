void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_printint(int n);

void mx_print_name(int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printchar('\n');
    mx_printint(argc);
    mx_printchar('\n');
}
