#include <stdio.h>
int main()
{
    int array[7], size = 7;
    printf("Enter %d elements for an array.\n", size);
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < size - 1; i++)
    {
        int smallestNum = i;
        
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[smallestNum])
            {
                smallestNum = j;
            }
        }
        
        int temp = array[i];
        array[i] = array[smallestNum];
        array[smallestNum] = temp;
    }

    printf("\nSorted Array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}