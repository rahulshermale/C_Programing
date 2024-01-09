#include <stdio.h>
#include <stdbool.h>
// Q16. Go on accepting numbers from the user till the user enters 0 and calculate the sum of these numbers.

int main()
{

    int num;
    // bool isBoolean = true;
    int sum = 0;

    printf("Enter number till 0 \n");
    while (1)
    {
        printf("Enter A number ");
        scanf("%d", &num);

        if (num == 0)
        {
           break;
        }
    else
    sum += num;
         
    }
    printf("The Sum Of Number is : %d", sum);
}