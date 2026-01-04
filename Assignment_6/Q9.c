// Program to separate odd and even integers into separate arrays
#include <stdio.h>

int main() {
    int n, a[100], even[100], odd[100];
    int evenCount = 0, oddCount = 0; // counters for even and odd numbers

    // Input total number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input each element and classify as even or odd
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0) {       // Check if even
            even[evenCount] = a[i];
            evenCount++;
        } else {                   // Else it's odd
            odd[oddCount] = a[i];
            oddCount++;
        }
    }

    // Display even numbers
    printf("\nEven numbers are:\n");
    if (evenCount == 0)
        printf("No even numbers found.\n");
    else {
        for (int i = 0; i < evenCount; i++)
            printf("%d ", even[i]);
    }

    // Display odd numbers
    printf("\n\nOdd numbers are:\n");
    if (oddCount == 0)
        printf("No odd numbers found.\n");
    else {
        for (int i = 0; i < oddCount; i++)
            printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}
