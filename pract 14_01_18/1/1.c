#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef unsigned long long ull;
ull iter(ull n, ull sum)
{
	if (n == 64)//����� ���� ������
		return sum;// ������� ����� ����� �� ������ n
	else
		return iter(n + 1, sum + (ull)pow(2.0, n));//���������� � ������� ������ � ������� �������
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