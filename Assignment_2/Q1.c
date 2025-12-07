// Swap to values using a third variable5
#include<stdio.h>
int main(){
int a,b,temp;
printf("Enter a: ");
scanf("%d",&a);
printf("Enter b: ");
scanf("%d",&b);
printf("Before swapping a= %d,b= %d",a,b);
temp=a;
a=b;
b=temp;
printf("\nAfter swapping a= %d,b= %d",a,b);
return 0;
}