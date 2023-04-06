#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main() {
	double x, y, z; int a;
	const double pi = 3.14159265359;
	scanf_s("%d ", &a);
	scanf_s("%lf%lf%lf", &x, &y, &z);
	double t = (2 * cos(x - pi / 6)) / (0.5 + pow(sin(y), 2)) * (1 + pow(z, 2) / (3 - pow(z, 2) / 5));


	switch (a) {
	case 0:printf("%lf", t); break;
	case 1:
	case 100:
	case 50:
	case 31:printf("%lf", t); break;
	case 2: return 0;
	default: return 1;
	}
}