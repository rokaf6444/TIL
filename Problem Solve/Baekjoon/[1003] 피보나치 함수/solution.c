#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void fibo(int n)
{
	int pp = 0;
	int p = 1;
	int result = 0;

	for (int i = 0; i <= n; i++)
	{
		pp = p;
		p = result;
		result = pp + p;
	}
	printf("%d %d\n", pp, p);
}

int main()
{
	int test = 0;
	int n = 0;

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		scanf("%d", &n);
		fibo(n);
	}
	return 0;
}