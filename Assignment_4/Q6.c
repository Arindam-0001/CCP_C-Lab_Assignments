// print the following pattern
// 1
// 01
// 001
// 0001
// 00001
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            if(i==j){
                printf("1");
            }else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
} 