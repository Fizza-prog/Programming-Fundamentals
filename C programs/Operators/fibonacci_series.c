#include<stdio.h>
int main()
{
    int num,n1=0,n2=1,n3;
    printf("Enter the limit: ");
    scanf("%d",&num);
    printf("Fibonacci series up to %d: ", num);
    while(n1<num)
    {
       printf("%d ",n1);
       n3=n1;
       n1=n1+n2;
       n2=n3;
    }
    printf("\n");
    return 0;
}