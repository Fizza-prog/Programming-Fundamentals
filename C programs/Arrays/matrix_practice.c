#include<stdio.h>
void getInput(int arr[][3],int);
void printArray(int arr[2][3]);
int sumArray(int arr[][3],int);
int main()
{
    int arr[2][3];
    getInput(arr,2);
    printArray(arr);
    printf("Sum of array elements: %d\n", sumArray(arr,2));
    return 0;
}
void getInput(int arr[][3],int row)
{
    printf("Enter 2x3 matrix:\n");
    for (int i=0;i<row;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
void printArray(int arr[2][3])
{
    printf("Matrix:\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int sumArray(int arr[][3],int r)
{
    int sum=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<3;j++)
            sum=sum+arr[i][j];
    return sum;
}