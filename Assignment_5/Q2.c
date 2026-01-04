// To find maximum and minimum between two numbers using function
#include<stdio.h>
void max_fun(int ,int );
int main()
{
int a,b;
printf("Enter two numbers: ");
scanf("%d %d",&a,&b);
max_fun(a,b);
return 0;
}

void max_fun(int a,int b)
{
    if(a>b)
    printf("%d is maximum and %d is minimum",a,b);
    else
    printf("%d is maximum and %d is minimum",b,a);
}