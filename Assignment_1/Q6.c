// Display Area and Perimeter of a rectangle
#include<stdio.h>
int main()
{
int length,width,Area,Perimeter;
float pi=3.14;
printf("Enter length and width of a rectangle:\n ");
scanf("%d %d",&length,&width);
Area=length*width;
Perimeter=2*(length+width);
printf("The Area of the rectangle is %d and perimeter of the rectangle is %d ",Area,Perimeter);
return 0;
}