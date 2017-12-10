#include<stdio.h>
#define N 25
#include<string.h>
#define M 80
char *reverseWords(char *in, char *out)
{
	
	char ch = ' ';
	int count = 0, i = 0,j=strlen(in)-1;
	while (i<19)
	{
		count = 0;
		while ((ch = in[i]) != ' ')
		{
			count++;

			if (ch == '\n')
			{
				in[i] = '\0';
				break;

			}
			if (count == 1)// creat pointer [j]
			{
				out[j] = in[i];
				//j--;
			}
			i++;
		}
		//text[i] = '\0';
		i++;

	}

	

	return out;
}

int main()
{
	int i = 0, j = 0, count = 0;
	char in[M] = { 0 };
	char *pstr[N];
	char *out[N];
	char ch=' ';
	printf("Enter line simbols with gaps\n");
	fgets(in, M, stdin);
	
	
	reverseWords(in, out);
		return 0;
}