#include <stdio.h>
#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	unsigned int g;
	unsigned int s;
	unsigned int p;
	unsigned int temp;
	unsigned int y;
	int flag;
	printf("Если значение hex, введите 0, иначе любое число отличное от нуля: ");
	scanf_s("%d", &flag);
	if (flag)
	{
		printf("\nВведите десятичное значение: ");
		scanf_s("%d", &y);
	}
	else
	{
		printf("\nВведите шестнадцатиричное значение: ");
		scanf_s("%x", &y);
	}
	g = y >> 8;
	y = y & 255;
	s = y >> 4;
	y = y & 15;
	p = y >> 3;
	printf("\nИдентификатор группы, к которой притнадлежит пользователь:%d", g);
	printf("\nКод системы, которая загружается для пользователя:%d", s);
	printf("\nПризнак привилегированного пользователя:%d", p);
}