void mx_printstr(const char *s);

void mx_printchar(char c);

void mx_print_args(int argc, char *argv[]) {
    if (argc <= 1) return;

    for (int i = 1; i < argc; i++) {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

