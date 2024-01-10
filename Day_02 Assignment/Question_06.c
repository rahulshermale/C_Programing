// 5) accept a name and display whether its initial is small case , upper case or not an alphabet.

#include<stdio.h>

int main(){
char name[30];

scanf("%s",name,29); // we not need to write & 
for (int i = 0; i < 5; i++)
{
   if (name[0]==[^'a''A''az']);
   {
    printf("%s",name);
   }
   
}
char initial =name[0];
if (initial >= 'a' && initial <= 'z') {
        printf("The initial '%c' is a lowercase letter.\n", initial);
    }
    // Check if the initial is an uppercase letter
    else if (initial >= 'A' && initial <= 'Z') {
        printf("The initial '%c' is an uppercase letter.\n", initial);
    }
    // If the initial is not an alphabet character
    else {
        printf("The initial '%c' is not an alphabet character.\n", initial);
    }

}