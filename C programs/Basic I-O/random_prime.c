#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int lowerLimit,upperLimit,flag=0,found=0;
    printf("Enter lower limit: ");
    scanf("%d",&lowerLimit);
    printf("Enter upper limit: ");
    scanf("%d",&upperLimit);
    
    printf("Random prime numbers: ");
    while(found < 3)
    {
       int number = (rand()%(upperLimit-lowerLimit+1)) + lowerLimit;
       flag = 0;
       
       if(number <= 1) continue;
       
       for(int j=2; j<number; j++)
       {
          if(number%j == 0)
          {
            flag=1;
            break;
          }
       }
       if(flag==0)
       {
        printf("%d ",number);
        found++;
       }
    }
    printf("\n");
    return 0;
}