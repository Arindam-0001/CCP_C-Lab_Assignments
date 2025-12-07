// Display Area and Perimeter of a circle
#include<stdio.h>
int main()
{
int radius,Area,Perimeter;
float pi=3.141;
printf("Enter radius of a circle:\n ");
scanf("%d",&radius);
Area= pi*radius*radius;
Perimeter=2*pi*radius;
printf("The Area of the rectangle is %d and perimeter of the rectangle is %d ",Area,Perimeter);
return 0;
}