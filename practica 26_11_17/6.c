#include<stdio.h>
//#define N 10
//lookout the prime простых чиселб делятся без остатка на себя и ед но выдаем не простые
// мерим время
#include<time.h>
int isPrime(int value)
{
	for (int n = 2;n*n <= value;n++)//divide
		if (value%n == 0)
			return 0;
	return 1;
}
int getPrimen(int n) //return N prime
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
int main()
{
	clock_t start, finish;
	start = clock();//begin time

	for (int i = 900;i < 2020;i++)
		printf("%d-%d\n", i, getPrimen5(i));
	finish = clock();// finish time in clock
	printf("%f\n", (float)(finish - start) / CLOCKS_PER_SEC);// the time of work
	return 0;
}
