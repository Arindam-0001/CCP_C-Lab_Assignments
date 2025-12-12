#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    // Process each digit: compute factorial inline and add to sum
    while (num > 0) {
        remainder = num % 10;

        int fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Check if the sum of factorials of digits equals the original number
    if (sum == original) {
        printf("%d is a strong number\n", original);
    } else {
        printf("%d is not a strong number\n", original);
    }

    return 0;
}
