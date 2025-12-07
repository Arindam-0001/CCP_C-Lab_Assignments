// conversion celsius to fahrenheit
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in fahrenheit: ");
    scanf("%f",&fahrenheit);

    // compute the conversion 
    celsius = (5.0 / 9.0) * (fahrenheit - 32);
    printf("%.2f F = %.2f C\n",fahrenheit,celsius);
    return 0;
}