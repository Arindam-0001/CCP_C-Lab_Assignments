// Concatenate two string
#include<stdio.h>
int main()
{   
    char s1[50],s2[50];
    int i=0,j=0;
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;

    }
    s1[i]='\0';
    printf("The concatenated string is: %s",s1);
    return 0;
}