#include <stdio.h>

#define LOWER   0
#define UPPER   300
#define STEP    20

int main() {
    float fahr, celcius;
    int i;

    printf("%3c %6c\n", 'C', 'F');
    for (celcius = LOWER; celcius <= UPPER; celcius+=STEP) {
        //celcius = (5.0/9.0) * (fahr - 32.0);
        fahr = (9.0/5.0) * celcius + 32.0;
        printf("%3.0f %6.1f\n", celcius, fahr);
    }
}