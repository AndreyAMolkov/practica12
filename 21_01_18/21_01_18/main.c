#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "countries.h"
int main()
{
	FILE *fp;
	int number = 0;
	struct COUNTRY *arr = 0;
	fp = fopen("countries.csv", "rt");
	if (!fp) {
		puts("File:");
		return 1;
	}
		number = mkArray(&arr, fp);
		if (number == 0) {
			puts("Data error!");
			return 2;
		}
		//printf("%i",number);
		fclose(fp);
		
		return 0;

		
}