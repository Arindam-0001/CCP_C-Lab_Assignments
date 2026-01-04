// To find cube of any number using function
#include<stdio.h>
int cube(int);
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("The cube of %d is %d",num,cube(num));
    return 0;
}

int cube(int num)
{
    int cube;
    cube=num*num*num;
    return cube;
}