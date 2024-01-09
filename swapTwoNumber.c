#include<stdio.h>

int main()
{
int num1=10;
int num2=20;

// num1=num1+num2; // 30
// num2=num1-num2; // 10
// num1=num1-num2; // 20

// printf("swap number is num1 %d ,num2 is %d \n",num1,num2);


num1=num1^num2;  //30     
num2=num1^num2;  //20
num1=num1^num2;
printf("\n");
printf_s("swap number is num1 %d ,num2 is %d",num1,num2);
}