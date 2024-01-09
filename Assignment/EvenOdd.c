#include<stdio.h>
// Q5. Accept a number from the user check if it is odd or even number (Do not use % operator)
int isEven(int num){

    return (num & 1)==0;
}
int main()
{
int number;
printf("Enter the Number : \n");
scanf("%d",&number);


if(isEven(number))
{
printf("Even ");

}

else 
printf("Odd ");



}