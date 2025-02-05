#include "create_agent.h"

int mx_strlen(const char *s) {
    int l = 0;
    while(s[l] != '\0') {
        l++;
    }
    return l;
}
