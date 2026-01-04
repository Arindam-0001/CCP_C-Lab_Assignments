#include<stdio.h>
int isperfect(int);
int main()
{
    int start,end;
    printf("Enter starting point: ");
    scanf("%d",&start);
    printf("Enter ending point: ");
    scanf("%d",&end);
    printf("Perfect numbers between %d and %d are:\n", start, end);

    for(int i=start;i<=end;i++){
        if(isperfect(i))
        printf("%d ",i);
    }
    return 0;
}

int isperfect(int num)
{
    int sum=0;
    int temp=num;
    for(int i=1;i<num;i++){
        if(num%i==0){
        sum=sum+i;
        }
    }
    if(temp==sum)
    return 1;
    else
    return 0; 
}

// int isperfect(int num) {
//     int sum = 0;
//     for (int i = 1; i < num; i++) {
//         if (num % i == 0) {
//             sum += i;  // Only add proper divisors
//         }
//     }
//     return sum == num;
// }
