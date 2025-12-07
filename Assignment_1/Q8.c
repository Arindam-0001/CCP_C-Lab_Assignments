// Display volume of a cylinder
#include<stdio.h>
int main()
{
int radius,height,volume;
float pi=3.141;
printf("Enter radius of a cylinder: ");
scanf("%d",&radius);
printf("Enter height of a cylinder: ");
scanf("%d",&height);
volume= pi*radius*radius*height;
printf("The volume of the cylinder is %d ",volume);
return 0;
}