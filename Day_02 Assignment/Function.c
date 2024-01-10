#include<stdio.h>
void main()
{
	//void disp(); // fun prototype
	puts("before call");
	disp();  // fun call
	puts("after call");
}
void disp() // fun def
{
	puts("in disp");
}
