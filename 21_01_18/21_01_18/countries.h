#include<stdio.h>
typedef  unsigned short US;

struct COUNTRY
{
	US unid;//�������� ���
	char abr2[3];// ��������. ���
	char abr3[4];// ��������. ���
	char name[256];
	char capital[256];

};
int mkArray(struct  COUNTRY **arr, FILE *fp);
void setStruct(struct COUNTRY *country, char *line);
char* copySub(char *where, char *to);
int checkLine(char *line);

