#include <stdio.h>
int main()
{
    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter The Array \n");
            scanf("%d", &arr[i][j]);
        }
    }
    int sum0 = 0;
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", arr[i][j]);

            if (arr[0][j] == arr[i][j])
            {
                sum0 += arr[i][j];
            }
            else if (arr[1][j] == arr[i][j])
            {
                sum1 += arr[i][j];
            }
            else if(arr[2][j] == arr[i][j]){
                
                sum2 += arr[i][j];
            }
        }
        printf("\n");
    }
    printf("the 2D Arrays sum Of \t%d,\t%d,\t%d",sum0,sum1,sum2);
}