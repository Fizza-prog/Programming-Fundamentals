#include<stdio.h>
int main()
{
    char arr[100], rev[100];
    int i=0,l=0,consonant=0,vowels=0,j=0,ispal=1;
    char ch;
    printf("Enter a string: ");
    while((ch=getchar())!='\n')
    {
        arr[i]=ch;
        l++;
        i++;
    }
    i--;
   
    printf("Length: %d\n",l);
    printf("Reversed: ");
    while(i>=0)
    {
        printf("%c",arr[i]);
        rev[j]=arr[i];
        i--;
        j++;
    }
    
    for(int i=0;i<l;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||
           arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        {
            vowels++;
        }
        else if((arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z'))
        {
            consonant++;
        }
    }
    printf("\nVowels: %d\nConsonants: %d\n", vowels, consonant);
    
    for(int k=0;k<l;k++)
    {
        if(arr[k]!=rev[k])
        {
            ispal=0;
            break;
        }
    }
    
    if(ispal)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");
    return 0;
}