#include <stdio.h>
int main() {
    char section[5];
    char grade[5];
    char attendance[5];

    printf("Enter data for 5 students:\n");

    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter section (A, B, C): ");
        scanf(" %c", &section[i]);

        printf("Enter grade (A, B, C, D, F): ");
        scanf(" %c", &grade[i]);

        printf("Enter attendance (P for present, A for absent): ");
        scanf(" %c", &attendance[i]);
    }

    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < 5; i++) {
        
        if (section[i] == 'B' && (grade[i] == 'A' || grade[i] == 'B') && attendance[i] == 'P') {
            count1++;
        }

        if (section[i] == 'C' && attendance[i] == 'A') {
            count2++;
        }
    }

    printf("\nResult:\n");
    printf("Students from section B with grade A or B and present: %d\n", count1);
    printf("Students from section C who were absent: %d\n", count2);

    return 0;
}