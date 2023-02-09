#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int s1, s2, s3, s4, s5, s6;

	scanf("%d", &s1);
	scanf("%d", &s2);

	s3 = s1 * (s2 % 10);
	s4 = s1 * ((s2 / 10) - (s2 / 100) * 10);
	s5 = s1 * (s2 / 100);
	s6 = s3 + s4 * 10 + s5 * 100;

	printf("%d\n%d\n%d\n%d", s3, s4, s5, s6);

	return 0;
}