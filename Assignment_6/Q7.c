// Program to delete an element from an array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("----Enter the array elements----\n");
    for(int i=0;i<n;i++){
        printf("Enter element %d value: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array elements are = [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
    // Deletion from an array
    int pos;
    printf("Enter the position of the array that you want to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("---Array after deletiuon---\n");
    printf("Array elements are = [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
}