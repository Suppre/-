#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



int main()
{	
	float a[7] = { 0 },t;
	float x = 0;
	float y = 0;
	int i;
	for (i = 1; i <= 7; i++)
	{
		printf("输入第%d次分数",i);
		scanf("%f", &a[i]);
	}
	for (i = 1; i <= 7; i++)
	{
		if (a[i] > a[i + 1])
		{
			t = a[i];
			a[i] = a[i + 1];
			a[i + 1] = t;
		}
	}
	for (i = 2; i <= 6; i++)
	{
		x += a[i];
	}
	y = x / 5;
	printf("平均成绩：%f\n", y);
	return 0;
}


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("这个数是偶数");
//	}
//	else
//	{
//		printf("这个数是奇数");
//	}
//	return 0;
//}