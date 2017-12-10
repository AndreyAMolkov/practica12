#include<stdio.h>
#define N 10
int search(int *arr, int size,int value)
{
	int count = 0;
	for (int i = 0;i < size;i++)
		if (arr[i] == value)
			count++;
	return count;
}
int main()
{
	int arr[N] = { 3,4,5,6,43,2,3,5,6,78 };
	int result = search(arr, N, 5);
	printf("%d\n",result);
	return 0;
}