// Swap to values without using a third variable5
#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Before swapping a= %d,b= %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping a= %d,b= %d",a,b);
return 0;
}