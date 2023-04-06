/*6. В одномерном массиве найти сумму отрицательных элементов, находящихся между 
минимальным и максимальным элементами.Сами минимальный и максимальный элементы в
сумму не включать. (Ввод количества элементов массива и сами элементы осуществить с
клавиатуры)*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = 0;
	int len;
	ost1:printf("Введите количество элементов массива: ");
	scanf_s("%d", &len);
	if (len <= 0) {
		printf("Нельзя вводить неположительное число. Попробуйте еще раз "); 
		goto ost1;
	}
	int a[100];
	for (int i = 0; i < len; i++) {
		printf("\nВведите %d элемент массива: ", i + 1);
		scanf_s("%d", &a[i]);
	}
	int maxindex;
	int minindex;
	int min = 100000;
	int max = -10000;
	for (int i = 0; i < len; i++) {
		if (a[i] > max) {
			max = a[i];
			maxindex = i;
		}
		if (a[i] < min) {
			min = a[i];
			minindex = i;
		}
	}
	if (maxindex > minindex) {
		for (int i = minindex+1; i < maxindex; i++) {
			if (a[i] < 0) {
				answer += a[i];
			}
		}
	}
	else {
		for (int i = maxindex + 1; i < minindex; i++) {
			if (a[i] < 0) {
				answer += a[i];
			}
		}
	}

	cout << answer;
	
	return 0;
}