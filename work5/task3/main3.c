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

/*�������� ���������, ������� ��������� �������� ������������� ����� ����� � ������ � �������������� 
�������� � ��� �����-���� ������������ ������� ��������������
���������
������
��������� ������ �������� �� �������:

    - char* int2str(char *buf, unsigned int value) - �������, ����������� ����� � ������ 
    - main() - ����������� ����� ������
	��������� ��� �����: task3.h,task3.c,main3.c.*/