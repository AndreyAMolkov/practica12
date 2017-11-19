#include<stdio.h>
#include<string.h>
#define IN 1
#define OUT 0
int main6()
{
	char buf[512];
	int flag = OUT;
	int i = 0;
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
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && flag == IN)
		{
			putchar(buf[i]);
		}
		
		else if (buf[i] == ' ' && flag == IN)
		{		
				flag = OUT;// exit world
          putchar('\n');
			
		}
i++;
	}
	if (flag == IN)//it's if need condition on last word
	{

	}
	putchar('\n');
	printf("%d word\n", count);
	return 0;
}