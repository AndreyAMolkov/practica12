#include<stdio.h>
#include<string.h>
#define IN 1
#define OUT 0
int main5()
{
	char buf[512];
	int flag = OUT;
	int i = 0;
	int count = 0;
	printf("Enter a line :\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = '\0';
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag =IN ;//enter in word
		}
		else
		{
			if (buf[i] == ' ' &&flag == IN)
				flag = OUT;// exit world
			i++;
		}
		
	}
	printf("%d word\n", count);
	return 0;
}