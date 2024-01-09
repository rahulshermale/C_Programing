// Accept a number from the user and print those many numbers after the number.

#include <stdio.h>

int main()
{

    int num, second;

    printf("Enter A number : ");
    scanf("%d", &num);

    printf("Enter second number : ");
    scanf("%d", &second);

    printf("print after %d\n ", num);

    for (int i = 1; i <= second; i++)
    {
        printf("print the number %d\n", num + i);
    }
    printf("\n");
}