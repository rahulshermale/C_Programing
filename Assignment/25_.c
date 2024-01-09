#include <stdio.h>

int main()
{

    int n,m;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Enter The Number : ");
    scanf("%d",&m);
    for (int i = 1; i < n; i++)
    {
        if(i%m==0){
            if (i%2==0)
            {
                printf("Even number is %d\n",i);

            }
            else
             printf("odd number is%d \n",i);
            
        }
        
    }
    
}