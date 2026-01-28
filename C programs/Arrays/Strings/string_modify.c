#include <stdio.h>
void modifyString(char arr[], int size);
int main() {
    char arr[51];
    printf("Enter 50 characters:\n");
    for (int i = 0; i < 50; i++) {
        scanf(" %c", &arr[i]);
    }
    arr[50]= '\0';
    modifyString(arr,50);
    return 0;
}
void modifyString(char arr[], int size) {
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            arr[i] = '*';
        } else if (arr[i] == ' ' || arr[i] == '\t') {
            arr[i] = '_';
        } else if ((arr[i] < 'A' || arr[i] > 'Z') &&
                   (arr[i] < 'a' || arr[i] > 'z')) {
            arr[i] = '$';
        }
    }
    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}