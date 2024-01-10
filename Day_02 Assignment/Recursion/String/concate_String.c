
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[40] = "hello ";
    char str2[] = "world";
    strcat_s(str1, 39, str2);
    puts(str1);
}