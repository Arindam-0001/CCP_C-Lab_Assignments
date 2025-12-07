// Display some Arithmetic operation
#include<stdio.h>
int main(){
int no_1,no_2,add,sub,mul,div,rem;
printf("Enter first number: ");
scanf("%d",&no_1);
printf("Enter second number: ");
scanf("%d",&no_2);
add=no_1+no_2;
sub=no_1-no_2;
mul=no_1*no_2;
div=no_1/no_2;
rem=no_1%no_2;
printf("\n Addition of two numbers %d and %d is: %d",no_1,no_2,add);
printf("\n Subtraction of two numbers %d and %d is: %d",no_1,no_2,sub);
printf("\n multiplication of two numbers %d and %d is: %d",no_1,no_2,mul);
printf("\n Division of two numbers %d and %d is: %d",no_1,no_2,div);
printf("\n Remainder of two numbers %d and %d is: %d",no_1,no_2,rem);
    return 0;
} 

