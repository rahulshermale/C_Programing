// Q13. Accept a number from the user and print a table for that number

#include <stdio.h>

int main()
{
    int num;

    printf("enter A numberer : \n");

    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("The Table of number is = %d \n", num * i);
    }
}
