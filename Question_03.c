/*Q3. Accept a number from the user - if it is divisible by 3 print “three” , if it is divisible by 7 print
“seven” and if it is divisible by both 3 & 7, print “three -seven”*/
#include<stdio.h>

int main()
{



    int number;
printf("Enter A Number: \n");
scanf("%d",&number);

if(number % 3 == 0 && number % 7 ==0 ) 
{
     printf("three -seven");
}
else if(number%3==0)
{
    printf("three");
}
else if(number%7==0)
{
    printf("seven");
    /* code */
}
else{
    printf("Number is not divisible of three and seven");
}



}