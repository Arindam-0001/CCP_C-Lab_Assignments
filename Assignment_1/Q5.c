// Evaluate a expression
#include<stdio.h>
int main(){
int a,b,c,d,e,f;
float X;
printf("Enter  a, b, c, d, e, f :");
scanf("%d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f);
// compute result
X= a + b * (c / d)*e - f;
printf("Expression result:%.2f",X);
return 0;
}
