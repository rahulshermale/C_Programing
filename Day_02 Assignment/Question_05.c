#include<stdio.h>

int main(){
char arr[5];
printf("Enter 5 character");
for (int i = 0; i < 5; i++)
{
    scanf("%c",&arr[i]);
}

for (int i = 0; i < 5; i++)
{
    printf("Enter 5 character%c",arr[i]);
    
}

for (int i = 0; arr[i] !='\0'; i++)
{
    printf("%c \n",arr[i]);
   
}


}