#include <stdio.h>
#include <locale.h>

int count = 2;

int main(void) // Программа начинается тут. Это точка выполнения программы
{
	setlocale(LC_ALL, "Rus");
	printf("Возврат каретки в начало строки\r");
	printf("Ого    \n");
	printf("Выводим на экран \"двойные ковычки\"\n");
	printf("Выводим на экран \0 Нулевой символ, который также заканчивает строку.\n");
	printf("\nВыводим на экран \x3F Вопросительный знак.\n");

	// printf("Count = %d\n", count);

	return 0;
}