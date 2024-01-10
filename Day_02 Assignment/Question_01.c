#include<Stdio.h>
int main()
{
int arr[5];

for (int i = 0; i < 5; i++)
{
    printf("Enter A Number ");
    scanf("%d",&arr[i]);
}

 int smallest = arr[0];
    int srtArr[5];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        srtArr[i] = smallest;
    }

for (int i = 0; i < 5; i++)
{
    printf("%d ",srtArr[i]);
   


}
}