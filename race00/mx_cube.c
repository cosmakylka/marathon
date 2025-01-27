void mx_printchar (char c);

void mx_printLine(int n, int i, char edgeChar, char spacingChar, int isIncrement){ 
    mx_printchar(edgeChar);
    for(int k = 0; k < n * 2; k++) 
        mx_printchar(spacingChar);
    mx_printchar(edgeChar);
    if (isIncrement == 1){
        for(int j = 0; j < n/2; j++) 
            mx_printchar(' ');
    }
    else if(isIncrement == -1){
        for(int k = n; k > i; k--) 
            mx_printchar(' ');
    }
    else{
        return;
    }    
}

void mx_printTop(int n, int h){ 
    for (int i = 0; i < h + 1; i++) {
        for (int j = 0; j < h - i; j++) mx_printchar(' ');
        if (i == 0) {
            mx_printLine(n, i, '+', '-', 0);
        } else {
            mx_printLine(n, i, '/', ' ', 0);
            if (i == 0) mx_printchar('|');
            else{
                for(int k = 0; k < i; k++)
                    mx_printchar(' ');
                mx_printchar('|');
            }
        }
    mx_printchar('\n');
    }
}

void mx_printMid(int n, int h){ 
    for (int i = 0; i < n; i++) { 
        if (i == 0) {
            mx_printLine(n, i, '+', '-', 1);
            mx_printchar('|');
        }
        else if(i == h){
            mx_printLine(n, i, '|', ' ', 1);
            mx_printchar('+');
        }
        else if(i > h){
            mx_printLine(n, i, '|', ' ', -1);
            mx_printchar('/');
        }
        else{
            mx_printLine(n, i, '|', ' ', 1);
            mx_printchar('|');
        }
        mx_printchar('\n');
    }
    mx_printLine(n, 0, '+', '-', 0);
    mx_printchar('\n');
}

void mx_cube(int n) {
    if (n <= 1) return; 
    int h = n / 2; 
    mx_printTop(n, h);
    mx_printMid(n, h);
}
