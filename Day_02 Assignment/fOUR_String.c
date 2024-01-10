#include <stdio.h>
void main()
{
    char names[4][20];
    int i;
    puts("enter 4 names");
    for (i = 0; i < 4; i++)
    {
        gets_s(names[i], 19);
    }
    for (i = 0; i < 4; i++)
    {
        puts(names[i]);
    }
}