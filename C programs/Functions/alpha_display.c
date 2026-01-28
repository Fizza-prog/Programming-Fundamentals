#include <stdio.h>
void printAlpha(double alpha[], int size);
int main()
{
    double alpha[50];
    int size = 50;
    
    for (int i = 0; i < size / 2; i++) {
        alpha[i] = i * i;
    }
    
    for (int i = size / 2; i < size; i++) {
        alpha[i] = 3 * i;
    }
    
    printAlpha(alpha, size);
    return 0;
}

void printAlpha(double alpha[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%5.2f ", alpha[i]);  
        if ((i + 1) % 10 == 0) {
            printf("\n");  
        }
    }
}