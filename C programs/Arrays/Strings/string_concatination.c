#include<stdio.h>
int main()
{
    char arr1[30],arr2[30],concatenate[30];
    int i=0,j=0,c=0,m=0;
    char ch1,ch2;
    printf("Enter first string:\n");
    while((ch1=getchar())!='\n')
    {
        arr1[i]=ch1;
        concatenate[c]=arr1[i];
        i++;
        c++;
    }
    arr1[i]='\0';
    concatenate[c]=' ';
    c++;
    
    printf("Enter second string:\n");
    while((ch2=getchar())!='\n')
    {
        arr2[j]=ch2;
        concatenate[c]=arr2[j];
        j++;
        c++;
    }
    arr2[j]='\0';
    concatenate[c]='\0';
    
    printf("Concatenated string: ");
    do{
        printf("%c",concatenate[m]);
        m++;
    }while(concatenate[m]!='\0');
    printf("\n");
    return 0;
}
