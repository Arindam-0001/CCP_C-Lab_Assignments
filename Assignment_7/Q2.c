// Swap to numbers using pointers
#include<stdio.h>
void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b,*x,*y,temp;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	x=&a;
	y=&b;
	printf("Before swap: a= %d b= %d\n",a,b);
	swap(x,y);
	printf("After swap: a= %d b= %d\n",a,b);
	return 0;
}