// Bubble sort the array element using pointer and function
#include <stdio.h>
int main() {
    int arr[100], n, temp;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Pointer points to the first element of the array

    // Bubble Sort using pointer
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                // Swap elements
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = temp;
            }
        }
    }

    // Print sorted array
    printf("\nSorted array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}