// Program to find maximum and minimum element from an array
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
    // calculation of maximum number from an array
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Maximum number from the array element: %d",max);
    // calculation of minimum number from an array
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nMinimum number from the array element: %d",min);

}