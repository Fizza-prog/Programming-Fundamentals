#include <stdio.h>
int main()
{
    double arr1[100],arr2[100],sum[100],diff[100];
    printf("Enter 100 elements for first array: ");
    for (int i=0;i<100;i++)
    {
        scanf("%lf",&arr1[i]);
    }
   printf("Enter 100 elements for second array: ");
    for (int j=0;j<100;j++)
    {
        scanf("%lf",&arr2[j]);
    }
   for (int k=0;k<100;k++) 
   {
        sum[k]=arr1[k]+arr2[k];
        diff[k]=arr1[k]-arr2[k];
   }
   printf("\nSum of corresponding elements:\n ");
   for (int l=0;l<100;l++) 
    {
        printf("%.2lf ",sum[l]);
    }
  printf("\n\nDifference of corresponding elements:\n");
    for (int m=0; m<100; m++) 
    {
        printf("%.2lf ",diff[m]);
    }
    printf("\n");
    return 0;
}