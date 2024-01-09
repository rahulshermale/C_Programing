#include<stdio.h>

// Q7. Accept 10 numbers from the user and count how many are positive, negative or zero.

int main()
{
    int number;
    int zero=0;
    int positive=0;
    int negative=0;
for (int i = 1; i < 10; i++)
{

    printf("Enter Number %d ",i);
    scanf("%d",&number);

    if(number==0)
    {

zero++;
    }
    else if(number>=0)
    {
        positive++;
    }
    else
    negative++;
}

printf("the zero number is %d negative nunmber is %d positive number is %d ",zero,negative,positive);


}