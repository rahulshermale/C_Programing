#include <stdio.h>
/*Q.15 Accept a number and a single digit from the user.
Then check the number of occurrences of that digit in the number.
//12345  2*/

int main()
{
    int num, num2;

    printf("enter A numberer : \n");

    scanf("%d%d", &num, &num2);

    int copyNumber = num;
    int count = 0;
    while (num > 0)
    {

        int spNum = num % 10;
        if (spNum == num2)
        {
            count++;
        }

        num = num / 10;
    }

    printf("The count of occurance number is %d", count);
}