// Q17. Accept a number from the user and print the next 5 numbers.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter A number ");
    scanf("%d", &num);

    for (int i = num; i <= num+5; i++)
    {
        printf("The next Number is %d \n ", i);
    }
    

}