#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>


int is_prime(int n)
{
	int j;
	for (j = 2; j <=sqrt(n); j++)
	{
		if (n % j == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 101; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d\t", i);
		}
	}
	return 0;
}