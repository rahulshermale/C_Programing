// Q.16 Accept 5 numbers from the user and print the highest number.
#include <stdio.h>

int main()
{
    int num[5];
    int HighestNumber;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter A Number %d ", i + 1);
        scanf("%d", &num[i]);
    }

    HighestNumber = num[0];

    for (int i = 0; i < 5; i++)
    {
        if (HighestNumber < num[i])
        {
            HighestNumber = num[i];
        }
    }
for (int i = 0; i < 5; i++)
    {
        printf(" : %d", num[i]);
    }
    printf("Highest number is : %d", HighestNumber);
}