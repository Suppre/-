#include <stdio.h>
#include <math.h>



//乘法口诀表
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (a = 1; a <= i; a++)
//		{
//			printf("%d*%d=%d\t",i,a,i*a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//最大值
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int max = a[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//分数求和
//int main()
//{
//	int i = 0;
//	double a = 0;
//	int b = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		a += b*1.0 / i;
//		b = -b;
//	}
//	printf("%lf\n", a);
//	return 0;
//}

//数9的个数
//int main()
//{
//	int i=0;
//	int a = 0;
//	for (i = 9; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			a++;
//			printf("i=%d\n", i);
//		}
//		if (i / 10 == 9)
//		{
//			a++;
//			printf("i=%d\n", i);
//		}
//	}
//	printf("a=%d", a);
//	return 0;
//}

//找100-200之间的素数
//int main()
//{
//	int i, j;
//	int x = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i);j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			x++;
//			printf("%d", i);
//		}
//	}
//	printf("\n%d\n", x);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int a = 0;
//	int b = sizeof(arr) / sizeof(arr[0]) - 1;
//	int x = 7;
//	int y = 0;
//	while (a <= b)
//	{
//		y = (a + b) / 2;
//		if (arr[y] > x)
//		{
//			b = y - 1;
//		}
//		else if (arr[y] < x)
//		{
//			a = y + 1;
//		}
//		else
//			break;
//	}
//	if (a <= b)
//		printf("找到了,下标是:%d\n", y);
//	else
//		printf("找不到\n");
//	return 0;
//}
