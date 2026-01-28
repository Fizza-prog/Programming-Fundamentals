#include <stdio.h>
void revStr(char array[], int size);
int main()
{
    int i = 0;
    char ch;
    char string[100];
    printf("Enter a string:\n");
    while ((ch = getchar()) != '\n')
    {
        string[i] = ch;
        i++;
    }
    string[i] = '\0';
    i=i-1;
    printf("Reversed string: ");
    revStr(string, i);
    printf("\n");
    return 0;
}
void revStr(char array[], int size)
{
    if (size < 0)
    {
        return;
    }
    else
    {
        printf("%c", array[size]);
        size--;
        revStr(array, size);
    }
}