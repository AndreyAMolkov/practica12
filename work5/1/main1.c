#include<stdio.h>
#define N 40

intmain()
{
	int i = 0,size=0,x=0,y=0;
	char arr[N];


	drawFractal(arr, x, y, size);
	return 0;
}



/*�������� ���������, ������� ��������� � ��������� ���������� ������� ����������� ����������� � ������� ��� �� ������� 
�������

��������� ������ �������� �����������, ����� ����� �������� ������� ��- ����. �������, ��� ��������� ��������
���������� �������� � ��������� ���������� �����������, ������������ ������ �����������.

� ������ ���� ����������� ����������� ������� drawFractal, ������� ��������� ����������� � �������, ����������
��� ����� � ����� � ��������� ������������. ���������� size ������ ������� �����������:
0 ������������� ������ �������, � >0 �������� ���������� �������� ������������.*/