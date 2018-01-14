#define SIZE 20
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void randomIn(int arr[SIZE][SIZE],int x,int y)
{
	int i = 0, j = 0;
	for (i=0;i<x;i++)
	{
		for (j = 0;j < y;j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
	;
}
arrSumm(int (*arr)[SIZE], int x, int y, int (*out)[SIZE])
{
	int a = 0, b = 0, j = 0, i = 0,z=0,summ=0;

	//int out[SIZE][SIZE] = {0};
	out[0][0] = arr[0][0];

	
	for (j = 1;j < x;j++)
	{
		a =arr[i][j];
		b = out[i][j-1 ];
		out[i][j] = a + b;
	}
	for (i = 1;i < y;i++)
	{
		a = arr[i];
		b =out[i];
	out[i][j] = a + b;
	}
	
	;
}
int main()
{// черепашка
	//strcmp(str1,str)   >0   =0   <0)
	//x=rand()%(M/2)
	//	у = rand() % (M / 2)
	//(N*m)/8 сколько звезд
	//str[y][m-x]// в право
	//arr[N][M]
//cleanMatrix(arr)

	int i = 0, j = 0;
	int out[SIZE][SIZE];
	int arr[SIZE][SIZE] = { 00. };
	randomIn(arr, SIZE, SIZE);
	arrSumm(arr, SIZE, SIZE, out);

	return 0;
}