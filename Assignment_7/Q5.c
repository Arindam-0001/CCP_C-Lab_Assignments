// Swap two arrays using pointers
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], temp[100];
    int *p1, *p2, *pt;
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements for array 1:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for array 2:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Set pointers to arrays
    p1 = arr1;
    p2 = arr2;
    pt = temp;

    // Swap arrays using pointer arithmetic
    for(int i = 0; i < n; i++) {
        *(pt + i) = *(p1 + i);   // temp[i] = arr1[i]
        *(p1 + i) = *(p2 + i);   // arr1[i] = arr2[i]
        *(p2 + i) = *(pt + i);   // arr2[i] = temp[i]
    }

    // Print swapped arrays
    printf("\nAfter swapping:\n");

    printf("Array 1: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    printf("\nArray 2: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}