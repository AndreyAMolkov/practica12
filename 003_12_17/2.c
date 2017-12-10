#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//#define N 1024


int main2()
{
	FILE *fp,*inp;
	int N = 100, ch;//N -number point from precision
	double x, y;
	fp = fopen("sin.xls", "wt");
	inp = fopen("2.c","rt");
	if (fp == NULL || inp==NULL) {
		puts("File error!");
		return 1;
	}
	for (int i = 0;i < N;i++)//N -number point from precision
	{
		x = 2.0 * M_PI * i / N;
		y = sin(x);
		fprintf(fp, "%f\t%f\n", x, y);
		fprintf(stdout, "%f\t%f\n", x, y);
	}

	while ((ch = fgetc(inp)) != EOF)
	
		
		putc(ch,stdout);
	fclose(fp);
	fclose(inp);
	return 0;
	

}
