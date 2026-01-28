#include<stdio.h>
#include<conio.h>
int main()
{
    char password[9];
    char newPassword[9],retryPass[9];
    char ch,ch2,ch3,choice;
    int flag=1;
    printf("Please enter a 8 digit password:\n");
    for(int i=0;i<8;i++)
    {
       ch=getch();
       printf("*");
       password[i]=ch;
    }
    printf("\nDo you wish to change your password?('Y' or 'N')\n");
    scanf(" %c",&choice);
    while(choice!='Y'&&choice!='N'&&choice!='y'&&choice!='n')
    {
        printf("\nInvalid choice.Try again!");
        scanf(" %c",&choice);
    }
    if(choice=='n'||choice=='N')
    {
        printf("thanks for trusting us :)\nHere is the password you entered:\n");
        for(int i=0;i<8;i++)
        {
            printf("%c",password[i]);
        }
    }
    if(choice=='Y'||choice=='y')
    {
        printf("kindly enter the new password you want to set:\n");
        for(int i=0;i<8;i++)
        {
            ch2=getch();
            printf("*");
            newPassword[i]=ch2;
        }
        do{
        printf("\nkindly re enter the new password:\n");
        for(int i=0;i<8;i++)
        {
            ch3=getch();
            printf("*");
            retryPass[i]=ch3;
        }
        printf("\nverifying...");
        for(int i=0;i<8;i++)
        {
            if(newPassword[i]!=retryPass[i])
            {
                printf("\nerror! The passwords don't match!");
                break;
            }
            else{
                flag=0;
            }
        }
    }while(flag==1);
    printf("\nYour password has been updated!");
    printf("\nold password:\n");
    for(int i=0;i<8;i++)
    {
        printf("%c",password[i]);
    }
    printf("\nHere is your new password:\n");
    for(int j=0;j<8;j++)
    {
        printf("%c",newPassword[j]);
    }
    }
    printf("\nTHANK YOU FOR USING OUR SERVICES! HAVE A GOOD DAY :)");
    return 0;
}