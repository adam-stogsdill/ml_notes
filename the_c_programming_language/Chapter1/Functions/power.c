#include <stdio.h>

// Do an early definition of the function
int power(int m, int n);

int main() {
    int i;

    for (i = 0; i < 10; ++i) {
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }
    return 0;
}

int power(int base, int exponent) {
    int result = 1;
    if (exponent == 0)
        return 1;

    for (int i = 1; i <= exponent; ++i) {
        result *= base;
    }
    return result;
}
