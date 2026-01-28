#include <stdio.h>
int findWord(char text[], char word[]) {
    int i = 0, j = 0, start;
    while (text[i] != '\0') {
        if (text[i] == word[0]) {
            start = i;
            j = 0;
            while (word[j] != '\0' && text[i] == word[j]) {
                i++;
                j++;
            }
            if (word[j] == '\0' && (text[i] == ' ' || text[i] == '\0')) {
                return 1;
            } else {
                i = start + 1;
            }
        } else {
            i++;
        }
    }
    return 0;
}

int main() {
    char text[100];
    char word[20];
    char ch;
    int i = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n' && i < 99) {
        text[i++] = ch;
    }
    text[i] = '\0';

    printf("Enter word to search: ");
    i = 0;
    while ((ch = getchar()) != '\n' && i < 19) {
        word[i++] = ch;
    }
    word[i] = '\0';

    if (findWord(text, word)) {
        printf("Word found!\n");
    } else {
        printf("Word not found.\n");
    }
    return 0;
}