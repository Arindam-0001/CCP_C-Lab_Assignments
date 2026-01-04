#include<stdio.h>
void binary(int);
int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    binary(num);
    return 0;
}
void binary(int x)
{
    int rem,bin=0,f=1;
    while(x!=0)
    {
        rem=x%2;
        bin=bin+rem*f;
        f=f*10;
        x=x/2;
    }
    printf("%d",bin);
}