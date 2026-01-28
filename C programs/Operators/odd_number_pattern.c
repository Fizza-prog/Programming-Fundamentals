#include<stdio.h>
int main()
{
    int n,c=1,c2=1,c3=1,n2=1;
    printf("Enter number of rows: ");
    scanf(" %d", &n);
    while(c<=n)
    {
        c2=1;
        while(c2<=c3)
        {
            if((n2%2)!=0)
            {
                printf("%d ",n2);
                c2++; 
            }
           
            n2++;
        }
        printf("\n");
        c3++;
        c++;
    }
    return 0;
}