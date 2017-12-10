#include<stdio.h>
#define N 10
int search1(int *arr, int size, int value,int start)
{
	int count = start;
	for (int i = start;i < size;i++)
		if (arr[i] == value)
		{
			return i;
			
		}

	return -1;
}
int main1()
{
	int arr[N] = { 3,4,5,6,43,2,3,5,6,78 };
	int start = 0,count=0;
	while ((start = search1(arr, N, 15, start)) != -1) {
		printf("%d\n", start++);
		count++;
	}
		if (count == 0)
			printf("Not found\n");

	return 0;
}