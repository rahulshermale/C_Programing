#include<stdio.h>
void main()
{
	int arr[3][3] = { 10,20,30,40,50,60,70,80,90};
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		printf("%d\n", sum);
		sum=0;
	}

//sum of column
int arr[3][3] = { 10,20,30,40,50,60,70,80,90};
	int sum1 = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			sum1 += arr[j][i];
		}
		printf("sum of column%d\n", sum1);
		sum1=0;
	}
}



