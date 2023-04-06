#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main() {
	double x,y,z;
	const double pi = 3.14159265359;
	scanf_s("%lf %lf %lf", &x, &y, &z);
	double t = (2 * cos(x - pi / 6)) / (0.5 + pow(sin(y), 2))*(1 + pow(z, 2) / (3 - pow(z, 2) / 5));
	printf("%lf", t);
}