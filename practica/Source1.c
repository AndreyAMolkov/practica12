#include<stdio.h>
#include<time.h>
#include<stdlib.h>



int main1()
{
	clock_t now;
	char ch;
	int i;
	srand(time(0));
	for (;;)
	{
		while (1)
		{
			for (i = 0;i < 10;i++)
				putchar(rand() % ('Z' - 'A' + 1) + 'A');
			if (rand() % 100 > 98)
			{

				putchar('\n');
				break;
			}
			putchar('\r');
			now = clock();
			while (clock() < now + 50);
		}
	}
	return 0;
}