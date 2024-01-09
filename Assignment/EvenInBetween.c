// Q19. Accept a start and end range from the user and print all even number between them. (Give minimum two solutions)

#include<stdio.h>

int main()
{
    int num, count;

    printf("Enter A number : ");
    scanf("%d", &num);

    printf("Enter second number : ");
    scanf("%d", &count);

for (int i = num; i < count; i++)
{
    if (i%2==0)
    {
        printf("even Number  %d \n",i);
    }
    
}


}