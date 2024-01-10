
#include<stdio.h>
#include<string.h>
void main()
{
	char string[80];
	printf("enter a string:");
	scanf("%[^\n]", string,80);
	printf("%d\n",(unsigned)strlen(string));
}