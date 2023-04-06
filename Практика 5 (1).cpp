#include <stdio.h>
#include <iostream>
int main()
{
	unsigned int g;
	unsigned int s;
	unsigned int p;
	unsigned int temp;
	unsigned int y = 0;

	printf("Введите идентификатор группы, к которой притнадлежит пользователь (0 - 255) >");
	scanf_s("%d", &g);
	printf("Введите код системы, которая загружается для пользователя (0 - 15) >");
	scanf_s("%d", &s);
	printf("Введите признак привилегированного пользователя (0/1) >");
	scanf_s("%d", &p);
	temp = g & 255;
	y = y | temp << 8;
	temp = s & 15;
	y = y | temp << 4;
	temp = p & 1;
	y = y | temp << 3;
	printf("\nРезультатом работы является десятичное число: %d и шестнадцатеричное число: %x", y, y);
}