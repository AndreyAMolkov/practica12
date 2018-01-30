#include<stdio.h>
#define N 8
char board[N][N];
int count = 0;
int walk = 0;
cleanArray()
{
	int i = 0,j = 0;
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			board[i][j] = '-';
}
printSolution()
{
	int i=0,j = 0;
	printf("Solution %i\n",++count);
	for ( i = 0; i < N; i++)
	{
		for (j = 0;j < N;j++)
		{
			printf("%c", board[i][j]);
		}
		printf("\n");
	}
}
int checkPosition(int i,int j)//
{
	int x = 0;
	if (i == 0&&j==0&& count==1 ) return j;
	for (; j <N;j++)
	{
		for (int x=0;(i-x) >= 0;x++)
		{
			if (board[i - x][j] == '*')break;
			if ((j-x)>=0)
				if (board[i - x][j - x] == '*')	break;
			if ((j + x)<N)
				if (board[i - x][j + x] == '*')break;
			if ((i-x )== 0)return j;
		
		}
	}
	return -1;
}


placeQueen(int i,int j)//рекурсияб поставить фигуру на гориз с номером i
{
	if (i ==N)
	{
		printSolution();
	}
	if ((j = checkPosition(i, j)) == -1)
		return 1;
		else
		{
			board[i][j] = '*';
		//	printSolution();
			placeQueen(i + 1, 0);
			board[i][j] = '-';
			placeQueen(i, j + 1);
		}
	
}

int main()
{
	cleanArray();
	placeQueen(0, 0);
}