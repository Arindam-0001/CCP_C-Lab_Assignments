#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, s, area;

    // Ask user to input the three sides
    printf("Enter the three sides of the triangle (a b c):\n ");
    scanf("%f %f %f", &a, &b, &c) ;

    // Compute semiperimeter
    s = (a + b + c) / 2;

    // Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Print result
    printf("The area of the triangle is: %.2f\n", area);

    return 0;
}
