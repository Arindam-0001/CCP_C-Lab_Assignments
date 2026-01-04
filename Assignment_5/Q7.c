#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int remainder(int a, int b);

int main() {
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nResults:\n");
    printf("Addition: %d\n", add(num1, num2));
    printf("Subtraction: %d\n", subtract(num1, num2));
    printf("Multiplication: %d\n", multiply(num1, num2));

    if (num2 != 0) {
        printf("Division: %.2f\n", divide(num1, num2));
        printf("Remainder: %d\n", remainder(num1, num2));
    } else {
        printf("Division and Remainder: Cannot divide by zero.\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int remainder(int a, int b) {
    return a % b;
}