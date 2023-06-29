#include <stdio.h>

int main() {
    int c;

    //printf("%d %d %d", spaces, tabs, newl);

    while ((c = getchar()) != '`'){
        switch(c) {
            case ' ':
                putchar('\n');
                break;
            default:
                putchar(c);
        }
    }

    printf("hello");
    return 0;
}