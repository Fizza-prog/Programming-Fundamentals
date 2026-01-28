#include<stdio.h>
int main()
{
    int array[10],mul;
    printf("Enter ten elements for array: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    mul=array[3]*3;
    printf("Element at index 3 multiplied by 3: %d\n",mul);
    return 0;
}