// Q.24 Accept 10 numbers from the user and print the highest and the 2nd highest number.
#include <stdio.h>

int main()
{
    int num[5];
    int HighestNumber;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter A Number %d ", i + 1);
        scanf("%d", &num[i]);
    }

    HighestNumber = num[0];

int secondHigh=0;
    for (int i = 0; i < 10; i++)
    {
        if (HighestNumber < num[i])
        {
            secondHigh=HighestNumber;
            HighestNumber = num[i];

        }
    }
for (int i = 0; i < 10; i++)
    {
        printf(" : %d", num[i]);
    }
    printf("Highest number is : %d ", HighestNumber);

     printf("second  Highest number is : %d ", secondHigh);
}