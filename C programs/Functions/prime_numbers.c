#include<stdio.h>
int isPrime(int);
int main()
{
    int startNo, endNo,count,array[10],c=0;
    printf("Enter starting range: ");
    scanf("%d",&startNo);
    printf("Enter ending range: ");
    scanf("%d",&endNo);
    count = startNo+1;
    while (count<endNo)
    {
        if (isPrime(count))
        {
            array[c] = count;
            c++;
            if (c > 9)
            {
                count = endNo;
            }
        }
        count++;
    }
    printf("Prime numbers between %d and %d: ", startNo, endNo);
    for (int j = 0; j < c; j++)
    {
      printf("%d ",array[j]);
    }
    printf("\n");
    return 0;
}
int isPrime(int a)
{
    int count = 2;
    if (a == 1)
    {
        return 0;
    }
    else
    {
        while (a % count != 0)
        {
            count++;
        }
        if (count == a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}