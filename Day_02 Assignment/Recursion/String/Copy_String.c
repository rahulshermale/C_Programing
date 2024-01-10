#include<stdio.h>
#include<string.h>

int main()
{
	char str1[40] = "Welcome";
	char str2[40] = "hello";
puts(str1);
	strcpy_s(str1,39,str2);

	puts(str1);
	puts(str2);
}