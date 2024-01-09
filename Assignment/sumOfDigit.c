#include<stdio.h>
// Q10. Accept a number from the user and calculate the sum of digits.


int main()
{
    int num;
    int sum=0;
printf("enter A numberer : \n");

    scanf("%d",&num);

    while(num > 0)
    {
     sum+=num % 10;
     num/=10;

    }
    printf("The Sum of number is %d",sum);

}