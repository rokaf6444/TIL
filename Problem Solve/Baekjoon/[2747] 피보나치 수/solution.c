#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibo(int n)
{
	int pp = 0;
	int p = 1;
	int result = 0;

	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;

	for (int i = 2; i <= n; i++)
	{
		result = pp + p;
		pp = p;
		p = result;
	}
	return result;
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