
#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;
    // printf("%d\t",scanf_s("%d%d",&num1,&num2));
    printf("%d\n", printf("%d\t%d\t", num1, num2));

    printf("%d\t", scanf("%d%d", &num1, &num2));

    printf("%d\n", printf("%d\t%d\t", num1, num2));
    printf("%d\t", scanf("%d%d", &num1, &num2));

    printf("%d\n", printf("%d\t%d\t", num1, num2));
}