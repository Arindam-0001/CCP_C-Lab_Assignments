// print all negative elements in an array
#include<stdio.h>
int main()
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
    // Negative numbers identification
    printf("Negative numbers from the array elements are: ");
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}