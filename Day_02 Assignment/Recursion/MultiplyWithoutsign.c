#include <stdio.h>
void main()
{
    int multiply(int, int);
    int num, num1, k;
    puts("enter two numbers");
    scanf("%d%d", &num, &num1);
    k = multiply(num, num1);
    printf("Multiplication is  %d\n", k);
}
int multiply(int num, int num1)
{
    if (num1 == 0)
    {
        return 0;
    }
    else
    {
        return num + multiply(num, num1 - 1);
    }
}
