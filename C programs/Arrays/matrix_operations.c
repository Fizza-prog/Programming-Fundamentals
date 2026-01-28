#include<stdio.h>
void displayArr1(int arr1[3][3],int,int);
void displayArr2(int arr2[3][3]);
int main()
{
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    printf("Array 1:\n");
    displayArr1(arr1,3,3);
    printf("\nArray 2:\n");
    displayArr2(arr2);
    printf("\nSum of arrays:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    printf("\nDifference of arrays:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr1[i][j]-arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void displayArr1(int arr1[3][3],int m,int n)
{
     for (int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
}
void displayArr2(int arr2[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
}