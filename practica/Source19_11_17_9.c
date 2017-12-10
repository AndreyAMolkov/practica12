#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define IN 1
#define OUT 0
#include<stdio.h>
 #include<stdlib.h>
#include<time.h>
//#include "task.h"


/*.h
#define N 20
#define M 30
void print ()
void gen()
*/


/*task3.c
include task3.h
stdlib
stdio
extern int matr[N][M];
void gen()
{
int i,j;
for(i=0;i<N; i++)
for(j=0;j<M; j++)
}
void print()
{

int i,j;
for(i=0;i<N;i++)
{
for (j=0;j<M;j++)
	printf("%02d ",matr[i][j]);
	putchar('\n');

}
}


*/
//int matr[N][M];
int main9()
{
	srand(time(0));
	gen();
	print();

	return 0;
}