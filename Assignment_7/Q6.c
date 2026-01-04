// search an element in an array using pointers
#include <stdio.h>

int main() {
    int arr[100], n, key;
    int *ptr;
    int found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    ptr = arr; // Pointer points to the first element of the array

    // Search using pointer
    for(int i = 0; i < n; i++) {
        if (*(ptr + i) == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break; // stop after first occurrence
            
        }
    }
    

    printf("Element %d not found in the array.\n", key);
 

    return 0;
}