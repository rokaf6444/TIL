#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double x, y;

	scanf("%lf %lf", &x, &y);
	printf("%.20lf", x / y);

	return 0;
}