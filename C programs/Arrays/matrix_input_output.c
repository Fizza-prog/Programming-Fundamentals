#include<stdio.h>
int main()
{
    int row=0,col=0,arr[100][100];
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d",&row,&col);
    printf("Enter matrix elements:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}