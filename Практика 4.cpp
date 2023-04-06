#include <stdio.h>
#include <math.h>

int main() 
{
	a1:float x, y;
	scanf_s("%f%f", &x, &y);
	if ((x >= 0 && y >= 0 && y >= -2 * x + 2) || (x >= 0 && y <= 0 && y <= 2 * x - 2) || (x <= 0 && y >= 0 && (((y >= -x) && (pow(x, 2) + pow(y, 2) <= 2)) || ((y <= -x) && (pow(x, 2) + pow(y, 2) >= 2)))) || (x <= 0 && y <= 0 && (((y <= x) && (pow(x, 2) + pow(y, 2) <= 2)) || ((y >= x) && (pow(x, 2) + pow(y, 2) >= 2)))))
		printf("Goal\n");
	else
		printf("you missed\n");
	goto a1;
}