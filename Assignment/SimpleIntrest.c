#include<stdio.h>
/*
Q6. Accept principal amount, rate of interest and years of investment then find the simple interest
	interest=(principle_amt*rate*years)/100;
*/

int main()
{
int p,r,t;
printf("Enter principal :\n ");
scanf("%d",&p);


printf("Enter rate : \n");
scanf("%d",&r);

printf("Enter time in year : \n");
scanf("%d",&t);


       double interest=( p * r * t ) /100;


printf("The intrest of : %lf",interest);


}