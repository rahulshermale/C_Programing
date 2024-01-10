#include<stdio.h>

int main(){


char name[40];

printf("Enter Name :");
scanf("%39[^\n]", name);
int count = 0;
for (int i = 0; name[i] != '\0'; i++)
{
	count++;
}

printf("length of count given string is %d\n", count);

return 0;
}



