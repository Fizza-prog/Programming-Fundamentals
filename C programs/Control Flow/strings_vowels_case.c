#include<stdio.h>
void displayVowels(char array[] ,int size);
void convertCase(char array[],int size);
int main()
{
    char array[8];
    int valid;
    
    do {
        valid = 1;
        printf("Enter an 8 character alphabetic array: ");
        
        for(int i = 0; i < 8; i++)
        {
            scanf(" %c", &array[i]);
            if (!((array[i] >= 'A' && array[i] <= 'Z') || 
                  (array[i] >= 'a' && array[i] <= 'z'))) 
            { 
                valid = 0;
            }
        }
        
        if(!valid)
        {
            printf("Invalid input! Enter only alphabets.\n");
        }
        
    } while(valid == 0);
    
    displayVowels(array, 8);
    convertCase(array, 8);
    
    return 0;
}

void displayVowels(char array[], int size)
{
    int count = 0;
    printf("\nVowels found: ");
    for (int i = 0; i < size; i++)
    {
        char c = array[i];
        if(c == 'a'|| c == 'e'|| c == 'i'|| c == 'o'|| c == 'u'||
           c == 'A'|| c == 'E'|| c == 'I'|| c == 'O'|| c == 'U')
        {
            count++;
            printf("%c ", array[i]);
        }
    }
    printf("\nTotal vowels count: %d\n", count);
}

void convertCase(char array[], int size)
{
    printf("\nConverted to uppercase: ");
    for(int i = 0; i < size; i++)
    {
        if(array[i] >= 'a' && array[i] <= 'z')
        {
            array[i] = array[i] - 32;
        }
        printf("%c ", array[i]);
    }
    printf("\n");
}