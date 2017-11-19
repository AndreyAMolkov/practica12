#include<stdio.h>

unsigned int str2int8(char *buf)
{
	unsigned int value = 0;
	int i = 0;
	while (buf[i])
	{
		value = value * 10 + buf[i] - '0';
		i++;
		if (i == 9)
			break;
	}
	return value;
}
int main8()
{
	char buf[128] = "4567";
		int digit;
		printf("%u\n",str2int(buf));

	return 0;
}