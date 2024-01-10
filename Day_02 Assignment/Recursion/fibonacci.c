#include <stdio.h>
void main()
{
    void fibo();
    int a = 0, b = 1;
    printf("%d\n%d\n", a, b);
    fibo();
}
void fibo()
{
    static int a = 0, b = 1, c = 0;
    if (c > 30)
    {
        return;
    }
    else
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
        fibo();
    }
}
