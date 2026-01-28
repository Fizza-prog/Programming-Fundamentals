#include<stdio.h>
int main()
{
    int array1[100];
    int array2[200];
    printf("Enter 100 elements for array1: ");
    for(int i=0;i<100;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("Enter 200 elements for array2: ");
    for(int j=0;j<200;j++)
    {
        scanf("%d",&array2[j]);
    }
    
    printf("\nCopying array1 into array2 from position 100...\n");
    for(int i=0;i<100;i++)
    {
        array2[i+100]=array1[i];
    }
    
    printf("The combined array is: ");
    for(int j=0;j<200;j++)
    {
        printf("%d ",array2[j]);
    }
    printf("\n");
    return 0;
}