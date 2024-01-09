// Q12. Accept a number from the user and check if it is palindrome number or not.
#include <stdio.h>





int main()
{
    int num;

    printf("enter A numberer : \n");

    scanf("%d", &num);
    int rev = 0;

    int originalNum=num;
    while (num > 0)
    {
        rev = rev * 10 + (num % 10); // 0*10+3=3 3*10+2 =32

        num = num / 10;
    }
    printf("%d", rev);

    if(rev==originalNum){
        printf(" Number is palindrome ");
    }
    else 
    {
        printf(" Not a palindrom");
    }
}