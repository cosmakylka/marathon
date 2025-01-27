double mx_pow(double n, unsigned int pow) {
    double result = 1.0;
    
    while (pow > 0) {
        if (pow & 1) {
            result *= n;
        }
        n *= n;
        pow >>= 1;
    }
    
    return result;
} 

