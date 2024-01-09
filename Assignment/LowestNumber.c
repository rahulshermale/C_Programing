// Q.16 Accept 5 numbers from the user and print the highest number.
#include <stdio.h>

int main()
{
    int num[5];
    int LowestNumber;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter A Number %d ", i + 1);
        scanf("%d", &num[i]);
    }

    LowestNumber = num[0];

    for (int i = 1; i <= 5; i++)
    {
        if (LowestNumber > num[i])
        {
            LowestNumber = num[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf(" : %d", num[i]);
    }
    printf("Lowest number is : %d", LowestNumber);
}