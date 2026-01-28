#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    printf("Random Password: ");
    for(int i=1;i<=8;i++)
    {
        char random=(rand()%26)+'A';
        printf("%c",random);
    }
    printf("\n");
    return 0;
}