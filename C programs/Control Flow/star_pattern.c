#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
   
    while(i<=n)
    {
        int j=n;
        while(j>=i)
        {
            printf("*");
            j--;
        }
        printf("\n");
        i++;
    }
    int k=1;
    while(k<=n)
    {
        int l=1;
        while(l<=k)
        {
            printf("*");
            l++;
        }
        printf("\n");
        k++;
    }
    return 0;
}