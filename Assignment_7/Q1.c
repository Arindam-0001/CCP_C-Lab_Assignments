// Addition of two numbers using pointers
#include <stdio.h>

int addition(int *x, int *y)
{
    int sum = *x + *y;
    return sum;     // ? semicolon fixed
}

int main()
{
    int a, b, *x, *y;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    printf("Sum is: %d\n", addition(x, y));  // ? pass pointers

    int sum = *x + *y;
    printf("The sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}