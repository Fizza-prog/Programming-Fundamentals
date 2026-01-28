#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
    srand(time(0));
    int rand_no[10], ri, ui, pc, pincode[5], randompin[5], isverified = 1;
    
    printf("   THANKS FOR LOGGING IN!\n");
    
    printf("Kindly enter your pincode (5 digits long without any space):\n");
    for(int i = 0; i < 5; i++)
    {
        pc = getch();
        printf("*");
        pincode[i] = pc - '0';
    }
    
    printf("\n\nThese are the random numbers for digits 0 to 9:\n");
    for(int i = 0; i < 10; i++)
    {
        ri = rand() % 10;
        printf("%d -> %d\n", i, ri);
        rand_no[i] = ri;
    }
    
    printf("\nEnter the encrypted pincode using above mapping (5 digits, no space): ");
    for(int i = 0; i < 5; i++)
    {
        ui = getch();
        printf("*");
        randompin[i] = ui - '0';
    }
    
    printf("\n\nVerifying...\n");
    for(int i = 0; i < 5; i++)
    {
        if(randompin[i] != rand_no[pincode[i]])
        {
            isverified = 0;
            break;
        }
    }
    
    if(isverified)
    {
        printf("\nAuthentic input!\nYour original pincode is: ");
        for(int j = 0; j < 5; j++)
        {
            printf("%d", pincode[j]);
        }
        printf("\n");
    }
    else
    {
        printf("\nInvalid input, please login again.\n");
    }
    
    printf("\nPress any key to exit...");
    getch();
    
    return 0;
}