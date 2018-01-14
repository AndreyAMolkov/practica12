#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef unsigned long long ull;
ull iter(ull n, ull sum)
{
	if (n == 64)//номер шахм клетки
		return sum;// сколько наход зерна до клетки n
	else
		return iter(n + 1, sum + (ull)pow(2.0, n));//возведение в степень тольок с веществ числами
}

ull chessNumber()
{
	return iter(0, 0);
}
int main1()
{
	printf("%llu\n", chessNumber());
	return 0;
}