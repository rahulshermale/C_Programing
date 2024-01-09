// Q4. Accept a number from the user and check if it is odd or even number (Hint: use % operator)
#include<stdio.h>

int main()
{
int number;
printf("Enter the Number : \n");
scanf("%d",&number);


if(number%2==0)
{
    printf("Even number");
}
else if(number%2!=0)
{
    printf("Odd Number");
}
else
printf("zero");



}