#include<stdio.h>

int main()
{

char name[40];
char lastName[40];

printf("Enter First Name :");
// scanf("%s",&name);
gets(name);
printf("Enter Last Name :");
scanf("%s",&lastName);


int cnum=0;
for (int i = 0; name[i] != '\0'; i++)
{
cnum++;
    
    
}
for (int i = 0; lastName[i] != '\0'; i++)
{
   name[cnum]=lastName[i];
   cnum++;
}
name[cnum]='\0';


puts(name);

}