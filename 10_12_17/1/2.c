#include<stdio.h>
#define N 25
#include<string.h>
#define M 80
#include<stdlib.h>
compare(const void *a,const void *b)
{
		if (strlen(*(char **)a) <strlen(*(char **)b))
			return 1;
		else
			return-1;
}


void lineSort(char *pstr[],int count)
{
	qsort(pstr, count, sizeof(pstr), compare);
}

void printLine()
{

}

int main2()// task1
{
	int i = 0, j = 0, count = 0;
	char text[N][M] = {0};
	char *pstr[N];

	printf("Enter two or more line simbols with gaps\n");
	while (count<N && *fgets(text[count],M,stdin)!='\n')
	{
		pstr[count] = text[count++];
	}
	lineSort(pstr, count);
	//strle(p)>strlen(pj)

	return 0;
}