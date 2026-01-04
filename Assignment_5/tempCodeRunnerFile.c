// To check whether a number is Prime or Armstrong numbers
#include<stdio.h>
#include<math.h>
void prime(int );
void armstrong(int );
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime(num);
    armstrong(num);
    return 0;
}

void prime(int n)
{
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;
        }
    }
    if(count==2){
    printf("%d is prime number",n);
    }
    else{
    printf("%d is not prime number",n);
    }
}

void armstrong(int num){
    int rem,sum=0,count=0;
    int temp=num;
    // count digits
    int temp2=num;
    while(temp2>0){
        count++;
        temp2=temp2/10;
    }
    temp2=num;
    while(temp2>0){
        rem=temp2%10;
        sum=sum+pow(rem,count);
        temp2=temp2/10;
    }
    if(temp==sum)
    printf("%d is a Armstrong number",temp);
    else
    printf("%d is not a Armstrong number",temp);
}