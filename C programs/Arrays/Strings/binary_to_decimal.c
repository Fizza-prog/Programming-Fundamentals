#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define MAXLENGTH 6
bool binaryArr[MAXLENGTH] = { 0 };
int count2 = 0;

void fillBinaryArray(int num)
{
    int temp[MAXLENGTH] = {0};
    int tempCount = 0;
    
    for (int i = 0; num > 0; i++)
    {
        temp[i] = num % 10;
        num = num / 10;
        tempCount++;
    }
    
    for (int i = 0; i < tempCount; i++)
    {
        binaryArr[tempCount - 1 - i] = temp[i];
    }
    count2 = tempCount;
}

bool checkBinary(int num)
{
    bool isBinary = true;
    int digitCollect = 0;
    
    if (num == 0) return true;
    
    for (; num > 0; num = num / 10)
    {
        digitCollect = num % 10;
        if (digitCollect != 0 && digitCollect != 1)
        {
            isBinary = false;
            break;
        }
    }
    return isBinary;
}

bool checkLength(int num)
{
    int count = 0;
    
    if (num == 0) {
        count = 1;
    } else {
        for (; num > 0; num = num / 10)
        {
            count++;
        }
    }
    
    count2 = count;
    return count == MAXLENGTH;
}

void getinput()
{
    int binaryNum;
    
    do {
        printf("Enter a 6-Digit Binary Number: ");
        scanf("%d", &binaryNum);
        
        if (!checkBinary(binaryNum) || !checkLength(binaryNum))
        {
            printf("Invalid! Must be exactly 6 digits (0 or 1 only).\n");
        }
        
    } while (!checkBinary(binaryNum) || !checkLength(binaryNum));

    fillBinaryArray(binaryNum);
    
    printf("Stored bits: ");
    for (int i = 0; i < count2; i++)
    {
        printf("%d ", binaryArr[i]);
    }
    printf("\n");
}

int getUnsignedDec(bool binaryArr[])
{
    int decimal = 0;
    for (int i = count2 - 1, j = 0; i >= 0; i--, j++)
    {
        if (binaryArr[i] == 1)
        {
            decimal += (int)pow(2, j);
        }
    }
    return decimal;
}

int getSignedDec(bool binaryArr[])
{
    if (binaryArr[0] == 0) 
    {
        return getUnsignedDec(binaryArr);
    }
    else
    {
        int decimal = 0;
        for (int i = count2 - 1, j = 0; i >= 0; i--, j++)
        {
            if (i == 0) 
            {
                decimal -= (int)pow(2, count2 - 1);
            }
            else if (binaryArr[i] == 1)
            {
                decimal += (int)pow(2, j);
            }
        }
        return decimal;
    }
}

int main()
{
    getinput();
    printf("\nUnsigned Decimal: %d\n", getUnsignedDec(binaryArr));
    printf("Signed Decimal: %d\n", getSignedDec(binaryArr));
    return 0;
}