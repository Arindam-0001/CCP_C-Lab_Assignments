// Checking a number is even or odd
#include<stdio.h>
void main(){
    int no1;
    printf("Enter a numbers: ");
    scanf("%d",&no1);
    if(no1%2==0){
        printf("%d is even number",no1);
    } else{
          printf("%d is odd number",no1);
    }
}
