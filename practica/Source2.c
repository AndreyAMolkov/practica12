#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 512


int main2()
{

	int i, j,count;
	char buf[SIZE];
	srand(time(0));
	for (i = 0;i < SIZE - 1;i++)
		buf[i] = rand() % ('Z' - 'A' + 1) + 'A';
	buf[SIZE - 1] = '\0';
	puts(buf);

		for (i = 'A';i <= 'Z';i++)
		{
			j = 0;
			count = 0;
			while (buf[j] != '\0')
			{
				if (buf[j] == (char)i)
					count++;
				j++;
			}
			if (count>0)
		printf("%c-%d\n",i,count);
		}
	return 0;
}