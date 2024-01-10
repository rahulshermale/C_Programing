#include <stdio.h>
void main()
{
    void bin(int);
    int num;
    puts("Enter a number");
    scanf("%d", &num);
    bin(num);
}
void bin(int num)
{
    int rem;
    if (num <= 0)
    {
        return;
    }
    else
    {
        rem = num % 2;
        num = num / 2;
        bin(num);
    }
    printf("%d", rem);
}
