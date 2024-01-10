#include<stdio.h>

int main()
{


int arr[5];

for (int i = 0; i < 5; i++)
{
    printf("Enter A Number ");
    scanf("%d",&arr[i]);
}

int serchNumber;
scanf("%d",serchNumber);
int cnt=0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == serchNumber) {
          
          printf("The number is Availabel %d",arr[i]);
        }
    
        
        
    }

}