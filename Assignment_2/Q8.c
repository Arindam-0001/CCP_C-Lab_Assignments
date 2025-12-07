// Checking a number is divisible by 5 and 11 or not
#include<stdio.h>
void main(){
    int no;
    printf("Enter a numbers: ");
    scanf("%d",&no);
    if(no%5==0 && no%11==0){
        printf("%d is divisible by 5 and 11",no);
    } else {
        printf("%d is not divisible by 5 and 11",no);
    }
}
