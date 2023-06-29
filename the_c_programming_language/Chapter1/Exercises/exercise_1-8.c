#include <stdio.h>

int main() {
    int c, spaces, tabs, newl;
    spaces = tabs = newl = 0;

    //printf("%d %d %d", spaces, tabs, newl);

    while ((c = getchar()) != '`'){
        switch(c) {
            case '\n':
                ++newl;
                break;
            case ' ':
                ++spaces;
                break;
            case '\t':
                ++tabs;
                break;
            default:
                ;
        }
    }

    printf("%d %d %d\n", spaces, tabs, newl);
}