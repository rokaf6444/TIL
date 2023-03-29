#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int test = 0;
	int num = 0;

	scanf("%d", &test);

	for (int i = 0; i < test; i++)
	{
		int sum = 0;

		scanf("%d", &num);

		if (num == 0)
		{
			return 0;
		}
		for (int j = 1; j <= num / 2; j++)
		{
			if (num % j == 0) // j가 num의 약수이면
			{
				sum += j;
			}
		}

		if (sum == num) // 완전수이다
		{
			printf("Perfect\n");
		}
		if (sum < num)
		{
			printf("Deficient\n");
		}
		if (sum > num)
		{
			printf("Abundant\n");
		}
	}
}