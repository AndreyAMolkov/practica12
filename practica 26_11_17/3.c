#include<stdio.h>
#define N 10
///lookout the number in array arr[] 
int BinarySearch3(int *arr, int size, int value)// упорядочный массив
{
	int left = 0;
	int right = size - 1;
	int middle;
	while(left<=right)
	{
		middle = (left + right) / 2;
		if (value < arr[middle])
			right = middle - 1;
		else if (value > arr[middle])
		
			left = middle + 1;
		else
			return middle;
		

	}
	return -1;
}
int main3()
{
	int size =N, value = 0;
	int arr[N] = { 3,4,5,6,43,2,3,5,6,78 };
	printf("%d\n", BinarySearch3(arr, size, 78));
	
	return 0;
}