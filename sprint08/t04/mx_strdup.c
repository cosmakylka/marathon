#include "create_new_agents.h"

char *mx_strdup(const char *str) {
    if (str == 0) {
        return 0;
    }
    
    int length = mx_strlen(str);
    char *dup = mx_strnew(length);
    
    if (dup == 0) {
        return 0;
    }
    
    return mx_strcpy(dup, str);
}
