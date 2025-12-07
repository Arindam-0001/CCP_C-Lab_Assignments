// Swapping two variable
#include <stdio.h>

int main() {
    int a, b, temp;

    // Input values for a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}