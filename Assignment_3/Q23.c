// To check where a number is perfect number or not
#include<stdio.h>
int main(){
int num,sum=0;
printf("Enter a number: ");
scanf("%d",&num);
for(int i=1;i<num;i++){
    if(num%i==0){
        sum=sum+i;
    }
}
if(num==sum && num!=0){
    printf("%d is a perfect number ",num);
}else{
    printf("%d is not a perfect number ",num);
}
    return 0;
}