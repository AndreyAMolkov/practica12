#include<stdio.h>
#define N 10

int getMaxMin2(int *arr, int size,int *max, int *min) {
	*max=*min = arr[0];
	for (int i = 1;i < size;i++)
		{
		if(arr[i]>*max)
			*max = arr[i];//put in value min or max
		if (arr[i]<*min)
			*min = arr[i];
		}
	return max;
}
int main2()
{
	int arr[N] = { 3,4,5,6,43,2,3,5,6,78 };

	int max, min;
	getMaxMin2(arr, N, &max, &min);
	printf("Max=%d  Min=%d\n", max,min);

	return 0;
}