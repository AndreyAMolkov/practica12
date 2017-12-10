#include<stdio.h>
#define N 10
//lookout the prime простых чиселб делятся без остатка на себя и ед

int isPrime4(int value)
{
	for (int n = 2;n*n <= value;n++)//divide
		if (value%n == 0)
			return 0;
	return 1;
}

int main4()
{
	for (int i = 2;i < 20;i++)
		printf("%d-%d\n",i,isPrime(i));
	return 0;
}
