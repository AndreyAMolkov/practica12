#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define N 1024
int countLines1(FILE *fp)
{
	char buf[N];
		int count = 0;
	while (fgets(buf, N, fp) != NULL)
		count++;
	return count;
}


int main1()
{
	FILE *fp;
	int count = 0;
	char buf[N];
	int choice;
	srand(time(0));
	fp = fopen("wisdom1.txt", "rt");
	if (fp == NULL) {
		puts("I can't open wisdom.txt!");
		return 1;
	}

	count = countLines1(fp);
	rewind(fp);
	rand();
	choice = rand() % count + 1;
	while (choice)
	{
		fgets(buf, N, fp);
	choice--;
	}
puts(buf);
return 0;
}

