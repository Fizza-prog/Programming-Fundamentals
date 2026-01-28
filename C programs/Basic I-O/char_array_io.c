#include <stdio.h>
#include<conio.h>

int main() {
    char ch;
    char array[10];

    printf("Enter input (9 chars): ");
    for (int i = 0; i < 9; i++) {
        ch=getche();
        array[i]=ch;
    }

    array[9] = '\0';

    printf("\nOutput: ");
    for (int i = 0; i < 9; i++) {
        printf("%c", array[i]);
    }
    printf("\n");
    return 0;
}