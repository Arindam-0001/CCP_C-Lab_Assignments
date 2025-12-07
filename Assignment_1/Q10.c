// conversion fahrenheit to celsius
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature celcius: ");
    scanf("%f",&celsius);

    // compute the conversion 
    fahrenheit=(celsius*9/5)+32;


    printf("%.2f C = %.2f F\n",celsius,fahrenheit);
    return 0;
}