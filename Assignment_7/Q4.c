// Copy one array to another array using pointer
#include <stdio.h>

int main() {
    int arr1[100], arr2[100], n;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    // Point pointers to the arrays
    p1 = arr1;
    p2 = arr2;

    // Copy using pointers
    for(int i = 0; i < n; i++) {
        *(p2 + i) = *(p1 + i);   // Copy element by element
    }

    printf("\nCopied array elements:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}