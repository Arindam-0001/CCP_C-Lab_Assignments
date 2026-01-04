// print the following pattern
//     *
//    ***
//   *****
//  *******
// *********
#include<stdio.h>
int main()
{
    int i,j,k;
    int row=5;
    for(i=1;i<=row;i++){
        for(k=1;k<=row-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
     return 0;
}