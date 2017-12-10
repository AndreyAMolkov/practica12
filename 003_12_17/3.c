#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define SIZE 8192
// sort string to more
int compare(const void *a, const void *b)
{
	if (strlen(*(char**)a) > strlen(*(char**)b))
		return 1;
	else
		return -1;
}
int main()
{
	char *s[] = { "sdsdf","dfgsdgg","1312425423" };
	qsort(s, 3, sizeof(char*), compare);
	for (int i = 0; i < 3;i++)
		printf("%s ", s[i]);
	return 0;
}
