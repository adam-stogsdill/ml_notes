#include <stdio.h>
#include <stdbool.h>

#define IN  1
#define OUT 0

int main() {
    int word_lengths[12];
    for (int i = 0; i < 12; ++i)
        word_lengths[i] = 0;

    int c;
    int tmp_val = 0;
    bool in_word = false;
    while ((c = getchar()) != '\n') {
        if (c == ' ' || c == '\n' || c == '\t') {
            in_word = false;
            if (tmp_val > 0 && tmp_val <= 12)
                word_lengths[tmp_val-1] += 1;
            tmp_val = 0;
        } else if (!in_word) {
            in_word = true;
            ++tmp_val;
        } else {
            ++tmp_val;
        }
    } 
    
    for (int i = 0; i < 12; ++i)
        printf("%d\n", word_lengths[i]);
}