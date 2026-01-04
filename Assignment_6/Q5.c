// Program to insert a given element in a given position in an array
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
    int value, pos;
    printf("Enter the position of the array where new element insert: ");
    scanf("%d",&pos);
    printf("Enter the value that you want to insert: ");
    scanf("%d",&value);
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    printf("Array elements are = [ ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("]\n");
}