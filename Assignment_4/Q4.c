// print the following pattern
//  1
//  0 1
//  0 1 0
//  1 0 1 0
//  1 0 1 0 1
#include <stdio.h>

int main()
 {
    int i,j,n,x;
  
    printf("Enter rows  : ");
    scanf("%d",&n);
    x=1;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
            printf(" %d",x);
 
            x=!x;
        }
 
        printf("\n");
    }

    return 0;
}