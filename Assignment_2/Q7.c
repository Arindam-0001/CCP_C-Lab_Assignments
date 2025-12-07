// Checking a number is even or odd
#include<stdio.h>
void main(){
    int no;
    printf("Enter a numbers: ");
    scanf("%d",&no);
    if(no==0){
        printf("number=%d ",no);
    } else if(no>0){
          printf("%d is positive number",no);
    } else {
        printf("%d is negative number",no);
    }
}
