#include<stdio.h>
typedef unsigned long ull;
ull fib(ull n)//ряд фибоначи
{
	if (n == 1 || n == 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);

}

int main()
{
	for (ull n = 1;n < 50;n++)
			printf("%llu:%llu\n",n, fib(n));
	return 0;
}