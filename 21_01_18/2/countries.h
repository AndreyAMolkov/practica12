#include<stdio.h>
typedef  unsigned short US;

struct COUNTRY
{
	US unid;//числовой код
	char abr2[3];// двухбукв. код
	char abr3[4];// трехбукв. код
	char name[256];
	char capital[256];
	struct Country *next;//add tail ii struct

};
typedef struct COUNTRY TCountry;
char* copySub(char *where, char *to);
int checkLine(char *line);



TCountry *mkList(FILE *fp);
TCountry *create(char *line);
void addTail(TCountry *head, char *line);
void printList(TCountry *head);
int searchCountry(TCountry *head, char *Name);/* oder =id (3), abr2(2), abr3(3),Capital(?),Name(?) attempt need lookout is 'Name the Country: Zimbabve' then reserch  -

								    searchCountry(head,0,0,0,0,Zimb)  but reserch made only for lookout the Nameof Country*/
