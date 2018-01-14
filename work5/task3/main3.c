#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	unsigned int value = 0;
	char *buf;
	printf("Enter numbers: ");
	scanf("%ui", value);

	int2str(buf, value);
	puts(buf);
	putchar("\n");
	return 0;
}

/*Написать программу, которая переводит введённое пользователем целое число в строку с использованием 
рекурсии и без каких-либо библиотечных функций преобразования
Пояснение
Состав
Программа должна состоять из функций:

    - char* int2str(char *buf, unsigned int value) - функция, переводящая число в строку 
    - main() - организация ввода строки
	Создаются три файла: task3.h,task3.c,main3.c.*/