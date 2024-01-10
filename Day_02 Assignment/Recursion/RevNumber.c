#include <stdio.h>
void main()
{
    void rev(int);
    int num;
    puts("Enter a no.");
    scanf("%d", &num);
    rev(num);
}
void rev(int num)
{
    int i, j = 10;
    if (num == 0)
    {
        return;
    }
    else
    {
        i = num % j;
        printf("%d", i);
        rev(num = num / j);
    }
}
