#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//打印100 - 200之间的素数
int main()
{
	int i, a;
	int x = 0;
	for (i = 101; i <= 200; i++)
	{
		for (a = 2; a < i; a++)
		{
			if (i % a == 0)
			{
				break;
			}
		}
		if (a == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

//int main()
//{
//	int i;
//	for(i=1;i<=100;i++)
//		if (i % 3 == 0)
//		{
//			printf("%d\t",i);
//		}
//	return 0;
//}

//int main()
//{
//	int a, b, c, x;
//	scanf("%d%d%d",&a,&b,&c);
//	if (a < b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	if (a < c)
//	{
//		x = a;
//		a = c;
//		c = x;
//	}
//	if (b < c)
//	{
//		x = b;
//		b = c;
//		c = x;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a , b , c=0;
//	scanf("%d%d", &a,&b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("最大公约数：%d", b);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//				printf("%d此年为闰年\n", i);
//		}
//		if (i % 400 == 0)
//			printf("%d此年为闰年\n", i);
//	}
//	return 0;
//}

//int main()
//{
//    int n,a,b=1;
//    scanf("%d", &n);
//    for (a = 1; a<=n; a++)
//    {
//        b = b*a;
//    }
//    printf("b=%d", b);
//    return 0;
//}