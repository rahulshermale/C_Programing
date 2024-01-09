/* Q14. Accept a number from the user check if it is special number or not? Example: 145
1! =1
4!=1*2*3*4
5!=1*2*3*4*5
sum of the factorials is (1+24+120=145)*/

#include <stdio.h>

int isSpecial(int num)
{
    int fact = 1;
    for (int i = num; i > 1; i--)
    {
        fact *= i;
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
      
        int spNum = isSpecial(num % 10);
        
        calc += spNum;
        
        num = num / 10;
    }

    // char ch= (copyNumber==calc)?"Special Number" : "Not a sepcial Number";
    //     printf("%s", ch);

    if (copyNumber == calc)
    {
        printf("it is Special Number : %d", calc);
    }
    else
    {
        printf("Not A Special Number");
    }
}
