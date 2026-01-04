#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the sum of the series
float seriesSum(int limit) {
    float sum = 0;
    for(int i = 1; i <= limit; i++) {
        sum += (float)factorial(i) / i;
    }
    return sum;
}

int main() {
    int limit = 5;
    float result = seriesSum(limit);
    printf("Sum of the series is: %.2f\n", result);
    return 0;
}