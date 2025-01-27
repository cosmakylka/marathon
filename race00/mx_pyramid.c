void mx_printchar(char c);

void mx_print_spaces(int count) {
    for (int j = 0; j < count; j++) {
        mx_printchar(' ');
    }
}

void mx_print_front_spaces(int n, int i) {
    mx_print_spaces(n - 1 - i);
}

void mx_print_middle_spaces(int i) {
    if (i == 0) {
        return;
    }
    mx_print_spaces(2 * i - 1);
}

void mx_print_vertical_side_spaces(int n, int i, int vertical_side_lines) {
    if (i > 0 && i < vertical_side_lines) {
        mx_print_spaces(i);
        mx_printchar('\\');
    }
    else if (i >= vertical_side_lines) {
        mx_print_spaces(n - i - 1);
        mx_printchar('|');
    }
}

void mx_print_bottom_line(int underscores) {
    mx_printchar('/');
    for (int j = 0; j < underscores; j++) {
        mx_printchar('_');
    }
    mx_printchar('\\');
    mx_printchar('\n');
}

void mx_print_pyramid_line(int n, int i, int underscores) {
    int vertical_side_lines = n / 2;
    
    mx_print_front_spaces(n, i);
    
    mx_printchar('/');
    
    if (i == n - 1) {
        for (int j = 0; j < underscores; j++) {
            mx_printchar('_');
        }
    }
    else {
        mx_print_middle_spaces(i);
    }
    
    if (i < n) {
        mx_printchar('\\');
    }
    
    mx_print_vertical_side_spaces(n, i, vertical_side_lines);
    
    mx_printchar('\n');
}

void mx_pyramid(int n) {
    if (n <= 1 || n % 2 != 0) {
        return;
    }
    
    int underscores = 2 * n - 3;
    
    for (int i = 0; i < n; i++) {
        mx_print_pyramid_line(n, i, underscores);
    }
}
