#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "countries.h"
int main()
{
	FILE *fp;
	char *Name = "Zimb";
	int number = 0;
	TCountry *head;
	fp = fopen("countries.csv", "rt");
	if (!fp) {
		puts("File:");
		return 1;
	}
	 
	head=mkList(fp);
	/*if (number == 0) {
		puts("Data error!");
		return 2;
	}*/
	//printf("%i",number);
	fclose(fp);
	printList(head);
	searchCountry(head,Name);
	return 0;

}




struct Country *head = NULL;

