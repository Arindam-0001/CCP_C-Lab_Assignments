// Compare two string
#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i=0,j=0,flag=0;
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    while(s1[i]!='\0'||s2[j]!='\0'){
        if(s1[i]!=s2[j]){
            flag=1;
            break;
        }
        i++;
        j++;
    }
    if(flag==0){
        printf("Two strings are equal");
    }else{
        printf("Two string are not equal");
    }
    return 0;
}