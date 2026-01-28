#include<stdio.h>
int main()
{
    char arr1[100],arr2[100];
    char freq1[26]={0},freq2[26]={0};
    int i=0,j=0,l1=0,l2=0,isAnagram=1;
    char ch1,ch2;
    printf("Enter first string (lowercase):\n");
    while((ch1=getchar())!='\n')
    {
        arr1[i]=ch1;
        freq1[arr1[i]-'a']++;
        i++;
        l1++;
    }
    arr1[i]='\0';
    
    printf("Enter second string (lowercase):\n");
    while((ch2=getchar())!='\n')
    {
        arr2[j]=ch2;
        freq2[arr2[j]-'a']++;
        j++;
        l2++;
    }
    arr2[j]='\0';
    
    if(l1!=l2)
    {
        printf("Not anagrams (different lengths)!\n");
    }
    else
    {
        for(int c=0;c<26;c++)
        {
            if(freq1[c]!=freq2[c])
            {
                isAnagram=0;
                break;
            }
        }
        if(isAnagram)
            printf("Anagrams!\n");
        else
            printf("Not anagrams!\n");
    }
    return 0;
}