// Display a expression
#include <stdio.h>
#include <math.h> // For the pow() function

int main() {
    float a, b, X;

    // Taking input for a and b
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);

    // Calculating X = (a + b)^3
    X = pow((a + b), 3);

    // Displaying the result
    printf("The value of X = (a + b)^3 is: %.2f\n", X);

    return 0;
}
