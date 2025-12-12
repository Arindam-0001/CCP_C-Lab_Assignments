// /**
//  * C program to find HCF of two numbers
//  */

// #include <stdio.h>

// int main()
// {
//     int i, num1, num2, min, hcf=1;

//     /* Input two numbers from user */
//     printf("Enter any two numbers to find HCF: ");
//     scanf("%d%d", &num1, &num2);

//     /* Find minimum between two numbers */
//     min = (num1<num2) ? num1 : num2;

//     for(i=1; i<=min; i++)
//     {
//         /* If i is factor of both number */
//         if(num1%i==0 && num2%i==0)
//         {
//             hcf = i;
//         }
//     }

//     printf("HCF of %d and %d = %d\n", num1, num2, hcf);

//     return 0;
// }



#include<stdio.h>
int main()
{
    int i,n1,n2,min;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    min=n1>n2?n2:n1;
    for(i=min;i>=1;i--){
        if(n1%i==0 && n2%i==0 ){
            break;
        }  
    }
    printf("The HCF is %d",i);

    return 0;
}