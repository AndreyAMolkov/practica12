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
		switch (rand() % 2)
		{
		case 0:
			ch = rand() % ('z' - 'a' + 1) + 'a';
				break;
			case 1:
				ch = rand() % ('Z' - 'A' + 1) + 'A';
				break;
		}
		printf("%c", ch);
		if (rand() % 10 > 7)
			putchar(' ');
			now = clock();
		while (clock() < now + 100);
	}
	return 0;
}