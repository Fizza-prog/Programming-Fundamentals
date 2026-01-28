#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter 10 elements: ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++)
    {
        sum=sum+arr[j];
    }
    printf("The sum is %d\n",sum);
    return 0;
}