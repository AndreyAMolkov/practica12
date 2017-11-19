#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define SIZE 1000
#define N 26
// решение задачи7
int main4()
{

	int i;
	char buf[SIZE];
	int count[N] = {0};
	int max = 0;

	srand(time(0));
	for (i = 0;i < SIZE - 1;i++)
		buf[i] = rand() % ('Z' - 'A' + 1) + 'A';
	buf[SIZE - 1] = '\0';
	//puts(buf);

	i = 0;
		//count = 0;
		while (buf[i] != '\0')//анархонизм buf[i], так как ноль это лож
		{
			count[buf[i]-'A']++;//count[buf[i++]-'A']и убираем внизу i++
			i++;
		}
		for (i = 0;i < N;i++)
		{
			if (count[i] > max)
				max = count[i];
			if (count[i] > 0)
				printf("%c-%d\n", i + 'A', count[i]);
		}
		printf("MAX frequency:%d\n", max);
		for (i = 0;i < N;i++)
		{
			if (count[i] == max)
			
			if (count[i] > 0)
				printf("%c-%d\n", i + 'A', count[i]);
		}
	return 0;
}