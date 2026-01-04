// Program to take two sorted arrays and merge them in a single array
#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int a[50], b[50], merged[100];
    int n1, n2, n3;
    int i, j, k;

    // Input first array
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements: ", n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    // Input second array
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements: ", n2);
    for (j = 0; j < n2; j++)
        scanf("%d", &b[j]);

    // Merge arrays
    n3 = n1 + n2;
    for (i = 0; i < n1; i++)
        merged[i] = a[i];
    for (j = 0; j < n2; j++)
        merged[n1 + j] = b[j];

    // Sort the merged array
    bubbleSort(merged, n3);

    // Display sorted merged array
    printf("\nMerged and Sorted Array:\n");
    for (k = 0; k < n3; k++)
        printf("%d ", merged[k]);

    printf("\n");
    return 0;
}
