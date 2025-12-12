// Swap first and last digit of a number

#include<stdio.h>
int main()
{
int num,count=0,last_digit,first_digit,middle_digits,swap_number;
printf("Enter a number: ");
scanf("%d",&num);

// finding no. of digits
int copy_num=num;
while(copy_num>0){
    count++;
    copy_num=copy_num/10; 
}
printf("Total no. of digits in %d is %d",num,count);

// To find the last digit
copy_num=num;
last_digit= copy_num%10;

// For power calculation
int power=1;
for(int i=1;i<=count-1;i++){  
    power=power*10;
}

// To find the first digit
first_digit=copy_num/power;

// To find the middle digits
middle_digits=(copy_num/10)%(power/10); 

// After swapping first and last digit
swap_number=last_digit*power+middle_digits*10+first_digit;
printf("\n Before swap= %d \n After swap= %d",num,swap_number);
return 0;
}