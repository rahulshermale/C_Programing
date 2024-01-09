#include <stdio.h>

// Q.21  Accept a number from the user and print the Fibonacci series till that number.

int main()
{
    int num = 0, num2 = 1, num3, temp;
    // printf("%d  %d ",num,num2);
    printf("Enter A number : ");

    scanf("%d", &temp);

    while (temp > 0)
    {
        printf("%d ", num); // 

        num3 = num + num2;
        num = num2;
        num2 = num3;
       
       
        temp--;
    }
}