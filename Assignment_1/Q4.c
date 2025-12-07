// Display average of three marks
#include <stdio.h>
int main() {
    int Rollno,m1, m2, m3;
    float avg;

    // Prompt for input
    printf("Enter roll number: ");
    scanf("%d", &Rollno);

    printf("Enter marks 1: ");
    scanf("%d", &m1);
    printf("Enter marks 2: ");
    scanf("%d", &m2);
    printf("Enter marks 3: ");
    scanf("%d", &m3);

    // Compute average
    avg = (m1 + m2 + m3) / 3;

    // Display results
    printf("\nRoll number: %d\n", Rollno);
    printf("Average marks: %.2f\n", avg);

    return 0;
} 