#include <stdbool.h>
bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *src) {
    if (src == NULL)
        return 0;

    const int IMAX = 2147483647;
    const int IMIN = -2147483648;

    while (mx_isspace(*src)) {
        src++;
    }

    int s = 1;
    if (*src == '-') {
        s = -1;
        src++;
    } else if (*src == '+') {
        src++;
    }

    int r = 0;
    while (mx_isdigit(*src)) {
        int digit = *src - '0';

        if (r > (IMAX - digit) / 10) {
            return s == 1 ? IMAX : IMIN;
        }

        r = r * 10 + digit;
        src++;
    }

    return r * s;
}

