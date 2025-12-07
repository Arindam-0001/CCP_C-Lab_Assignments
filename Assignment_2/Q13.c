// Checking a character is uppercase or lowercase alphabet
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is a uppercase alphabet");
    } else {
        printf("%c is a lowercase alphabet");
    }

    return 0;
}