#include<stdio.h>
int main()
{
    float sales[15];
    printf("Enter 15 sales values: ");
    for (int i = 0; i < 15; i++) 
    {
        scanf("%f",&sales[i]);
    }
    float large = sales[0];
    float small = sales[0];
    for (int i = 1; i < 15; i++) 
    {
        if (sales[i] > large) 
        {
            large = sales[i];
        }
        if (sales[i] < small) 
        {
            small = sales[i];
        }
    }
    printf("Largest element: %.2f\n",large);
    printf("Smallest element: %.2f\n",small);
    return 0;
}