/*Q.15 Accept a number from the user and check if it is an Armstrong number or not ? Example: 153
1 cube =1
5 cube =125
3 cube = 27
sum of the cubes is (1+27+125=153)*/
#include <stdio.h>

int isSpecial(int num)
{
    int fact ;
    for (int i = 3; i >= 1; i--)
    {
        fact = num*num*num;
    }

    return fact;
}

int main()
{

    int num;

    printf("enter A numberer : \n");

    scanf("%d", &num);
    int copyNumber = num;
    int calc = 0;
    while (num > 0)
    {

        int spNum = isSpecial(num % 10);  //1-5

        calc += spNum; //1+125

        num = num / 10;
    }

    if (copyNumber == calc)
    {
        printf("it is Armstrong  Number : %d", calc);
    }
    else
    {
        printf("Not A Armstrong Number");
    }
}