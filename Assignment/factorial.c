#include<stdio.h>
// Q8. Accept a number from the user and find the factorial of the number.
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    int fact=1;
for (int i = num; i > 1; i--)
{
fact*=i;
}
printf("factoria %d",fact);

    
}