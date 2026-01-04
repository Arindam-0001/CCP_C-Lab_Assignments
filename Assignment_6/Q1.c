// Program to find the sum and average of all array elements
// // method: Without user input
// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<5;i++){
//         sum+=arr[i];
//     }
//     int avg=sum/5;
//     printf("The sum of all array elements is: %d",sum);
//     printf("The average of all array elements is: %d",avg);
//     return 0;
// }

// method: Taking user input for array element
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

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int avg=sum/n;
    printf("The sum of all array elements is: %d",sum);
    printf("\nThe average of all array elements is: %d",avg);
    return 0;
}