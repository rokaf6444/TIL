#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibo(n - 1) + fibo(n - 2);
}

int main()
{
	int n = 0;
	int result = 0;

	scanf("%d", &n);

	result = fibo(n);
	printf("%d", result);

	return 0;
}