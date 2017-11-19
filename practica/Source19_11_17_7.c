#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define IN 1
#define OUT 0
#define N 40
#define LEN 5
int main7()
{
	char buf[N];
	char word[N] = {' '};
	int flag = OUT;
	int i = 0,len=0, j=0;
	int count = 0;
	printf("Enter a line :\n");
	fgets(buf, 512, stdin);
	buf[strlen(buf) - 1] = ' ';
	while (buf[i])
	{
		if (buf[i] != ' ' && flag == OUT)
		{
			count++;
			flag = IN;//enter in word
			len=1;
			word[j++] = buf[i];
			
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			
			word[j++]= buf[i];
			len++;
		}

		else if (buf[i] == ' ' && flag == IN)
		{
			flag = OUT;// exit world
			
			if (len == LEN)
			{
				word[j] = '\0';
				printf("%s  ", word);
				
			}
len=j = 0;
		}
		i++;
	}
	if (flag == IN)//it's if need condition on last word
	{

	}
	//putchar('\n');
	printf("%d word\n", count);
	return 0;
}