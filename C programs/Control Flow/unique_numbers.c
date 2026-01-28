#include<stdio.h>
int main()
{
    int array[20];
    int n, count = 0, flag;
    
    for (int i = 0; i < 20; i++)
    {
        printf("Enter a number between 10 and 100: ");
        scanf("%d",&n);
        
        while (n < 10 || n > 100)
        {
           printf("Invalid input!\nEnter again: ");
           scanf("%d",&n);
        }
        
        flag = 0;
        for (int j = 0; j < count; j++)
        {
            if (n == array[j])
            {
                flag = 1;
                break;
            }
        }
        
        if (flag == 0)
        {
            array[count] = n;
            count++;
        }
    }
    
    printf("Unique numbers entered: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}