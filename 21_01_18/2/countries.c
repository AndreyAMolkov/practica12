#include<stdio.h>
#include "countries.h"

char* chomp(char *buf)
{
	buf[strlen(buf) - 1] = '\0';
	return  buf;
}

TCountry *create(char *line)
{
	static long int count;
	char tmp[4];
	char *p = line;
	TCountry *item = (TCountry*)malloc(sizeof(TCountry));
	p = copySub(p, tmp);//id
	item->unid = atoi(tmp);

	p = copySub(p + 1, item->abr2);
	p = copySub(p + 1, item->abr3);
	chomp(p);
	p = copySub(p + 1, item->name);
	p=copySub(p + 1, item->capital);
	item->next = NULL;
	count++;
	//printf("%i\n", count);
	return item;
}
void addTail(TCountry *head, char *line)
{
	while (head->next)
		head = head->next;
	head->next = create(line);

}
int searchCountry(TCountry *head, char *Name)
	{
		
			while (head)
			{
				if (strstr(head->name, Name))
					return 1;
				head = head->next;
			}
			return 0;
		
	
	}
TCountry *mkList(FILE *fp)
{
	int count = 0, number = 0;
	//TCountry *parr;
	char buf[256];  
	TCountry *head=NULL;
	
	
	while (fgets(buf, 256, fp))
	{
		if (checkLine(buf))
		{
			if (head==NULL)
				head = create(buf);
			else
				addTail(head,buf);
		}
		/*if (checkLine(buf))
		{
			setStruct(parr + number, buf);
			number++;
		}*/
	}
	//*arr = parr;
	return head;
}

char* copySub(char *where, char *to)
{
	while (*where != ','&&*where != '\n'&&*where != '\0')
		*to++ = *where++;
	*to = '\0';
	return where;
}

int checkLine(char *line)
{
	char tmp[256];
	char *p = line;
	p = copySub(p, tmp);//id
	if (strlen(tmp) != 3)
		return 0;
	if (atoi(tmp) == 0)
		return 0;
	p = copySub(p + 1, tmp);//AA
	if (strlen(tmp) != 2)
		return 0;
	p = copySub(p + 1, tmp);//AAA
	if (strlen(tmp) != 3)
		return 0;
	
	return 1;
}

void printList(TCountry *head)
{
	putchar('\n');
	while (head)
	{
		printf("%3i %3s %3s %s, %s\n",
			head->unid,
			head->abr2,
			head->abr3,
			head->capital,
			head->name);
		head = head->next;
	}
}


