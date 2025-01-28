int mx_atoi(const char *str);

int mx_sum_args(int argc, char *argv[]) {
    if (argc < 2) {
        return 0;
    }

    int sum = 0;

    for (int i = 1; i < argc; i++) {
        const char *arg = argv[i];
        int j = 0;

        if (arg[j] == '+' || arg[j] == '-') {
            j++;
        }

        int is_valid = 1;
        for (; arg[j] != '\0'; j++) {
            if (!mx_isdigit(arg[j])) {
                is_valid = 0;
                break;
            }
        }

        if (is_valid) {
            sum += mx_atoi(arg);
        }
    }

    return sum;
}

