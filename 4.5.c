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
		printf("�����%d�η���",i);
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
	printf("ƽ���ɼ���%f\n", y);
	return 0;
}


//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("�������ż��");
//	}
//	else
//	{
//		printf("�����������");
//	}
//	return 0;
//}