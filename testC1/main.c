#include <stdio.h>
#include <locale.h>

int count = 2;

int main(void) // ��������� ���������� ���. ��� ����� ���������� ���������
{
	setlocale(LC_ALL, "Rus");
	printf("������� ������� � ������ ������\r");
	printf("���    \n");
	printf("������� �� ����� \"������� �������\"\n");
	printf("������� �� ����� \0 ������� ������, ������� ����� ����������� ������.\n");
	printf("\n������� �� ����� \x3F �������������� ����.\n");

	// printf("Count = %d\n", count);

	return 0;
}