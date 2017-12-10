#include<stdio.h>
//#define N 10
//lookout the prime простых чиселб делятся без остатка на себя и ед но выдаем не простые


int isPrime5(int value)
{
	for (int n = 2;n*n <= value;n++)//divide
		if (value%n == 0)
			return 0;
	return 1;
}
int getPrimen5(int n) //return N prime
{
	int i = 2;
	int count = 0;
	while (1)
	{
		if (isPrime(i) == 1)
			count++;
		if (count == n)
			return i;
			i++;
	}
	return i;
}
int main5()
{
	for (int i = 1;i < 20;i++)
		printf("%d-%d\n", i, getPrimen5(i));
	return 0;
}
