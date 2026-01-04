#include<stdio.h>
int prime(int);
int main()
{
    int start,end;
    printf("Enter starting point: ");
    scanf("%d",&start);
    printf("Enter ending point: ");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are:\n", start, end);

    for(int i=start;i<=end;i++){
        if(prime(i))
        printf("%d ",i);
    }
    return 0;
}

int prime(int num)
{
    int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count==2)
    return 1;
    else
    return 0;
    
}