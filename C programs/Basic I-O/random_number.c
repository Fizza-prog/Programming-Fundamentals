#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int a,b;
    printf("Enter minimum value: ");
    scanf("%d",&a);
    printf("Enter maximum value: ");
    scanf("%d",&b);
    int no=rand()%(b-a+1)+a;
    printf("Random number between %d and %d: %d\n",a,b,no);
    return 0;
}