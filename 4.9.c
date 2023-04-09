#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



接受一个整型值（无符号），按照顺序打印它的每一位。
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n%10);
}

int main()
{
	unsigned int a = 0;
	scanf("%d", &a);
	print(a);
	return 0;
}
