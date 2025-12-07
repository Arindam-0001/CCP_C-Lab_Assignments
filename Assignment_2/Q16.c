// Checking a triangle is valid or not using side
#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides
    printf("Enter the three sides of a triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity using triangle inequality theorem
    if (a + b > c && b + c > a && c + a > b) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is NOT valid.\n");
    }

    return 0;
}