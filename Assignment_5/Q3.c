// Power of numbers
#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
int num,pow;
printf("Enter a number: ");
scanf("%d",&num);
printf("Enter power: ");
scanf("%d",&pow);
printf("%d to the power %d is %d",num,pow,power(num,pow));
return 0;
}

int power(int a, int b)
{
int power=pow (a,b);
return power;
}