#include<stdio.h>

// Q11. Accept a number from the user and reverse it. [ assume 3 digit no.]

int main(){
    int num;
    
printf("enter A numberer : \n");

    scanf("%d",&num);
int rev=0;
    while(num > 0)
{
 rev=rev*10+(num%10); //0*10+3=3 3*10+2 =32

num=num/10;
}
printf("%d",rev);
}