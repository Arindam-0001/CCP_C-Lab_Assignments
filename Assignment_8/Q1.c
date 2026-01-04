// Program to find the length of a string
#include<stdio.h>
int main()
{
    char s[50];
    int i=0;
    printf("Enter a string: ");
    gets(s);
    while(s[i]!='\0'){
        i++;
    }
    printf("The length of the string is: %d",i);
    return 0;
}

