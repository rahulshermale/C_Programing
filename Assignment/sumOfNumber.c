#include<stdio.h>
// Q9. Accept 10 numbers from the user and calculate their sum.

int main()
{
int num;
int sum=0;
for(int i=1;i<10;i++)
{
    printf("enter A numberer : ");

    scanf("%d",&num);
       sum=sum+num;
}
    printf("%d",sum);

}