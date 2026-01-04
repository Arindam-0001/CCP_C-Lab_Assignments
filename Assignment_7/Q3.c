// Program to input and print array elements using pointer
#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = arr;  // Point ptr to the array

    // Input elements using pointer
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", (ptr + i));
    }

    // Print elements using pointer
    printf("\nArray elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}