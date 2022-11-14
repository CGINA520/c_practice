#define _CRT_SECURE_NO_WARNINGS


//  指针作业

#include <stdio.h>
#include <math.h>
#include <string.h>


//     1

//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int a, b, c;
//	int* p1 = &a;
//	int* p2 = &b;
//	int* p3 = &c;
//	printf("输入三个数：\n");
//	scanf("%d%d%d", p1, p2, p3);
//	if (*p1 > *p2)
//	{
//		swap(p1, p2);
//	}
//	if (*p1 > *p3)
//	{
//		swap(p1, p3);
//	}
//	if (*p2 > *p3)
//	{
//		swap(p2, p3);
//	}
//	printf("%d %d %d\n", *p1, *p2, *p3);
//	return 0;
//}



//      3

//void input(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		scanf("%d", &str[i]);
//	}
//}
//
//void swap(int* str, int k)
//{
//	int max = str[0];
//	int min = str[0];
//	int i = 0;
//	for (i = 1; i < k; i++)
//	{
//		if (max < str[i])
//		{
//			max = str[i];
//		}
//		if (min > str[i])
//		{
//			min = str[i];
//		}
//	}
//	int tmp = max;
//	max = str[k-1];
//	str[k-1] = tmp;
//	int tmp1 = min;
//	min = str[0];
//	str[0] = tmp1;
//}
//
//void print(int* str, int k)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		printf("%d ", str[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	input(arr,10);
//	swap(arr,10);
//	print(arr,10);
//	return 0;
//}


//     函数作业

//     最大公约数与最小公倍数

//int gcdiv(int m, int n)
//{
//	while (m%n!=0)
//	{
//		int c = m % n;
//		m = n;
//		n = c;
//		
//	}
//		return n;
//}
//
//int gcqiv(int m, int n)
//{
//	int ret = gcdiv(m, n);
//	return m * n / ret;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("输入两个整数\n");
//	scanf("%d%d", &m, &n);
//	int ret1=gcdiv(m, n);
//	int ret2=gcqiv(m, n);
//	printf("%d %d", ret1, ret2);
//}


//     一元二次方程

//void f1(int a, int b, int c)
//{
//	double g = b * b - 4.0 * a * c;
//	double x1 = (-b + sqrt(g)) / 2.0 * a;
//	double x2 = (-b - sqrt(g)) / 2.0 * a;
//	printf("%lf %lf",x1, x2);
//}
//
//void f2(int a, int b, int c)
//{
//	printf("该函数无解");
//}
//void f3(int a, int b, int c)
//{
//	double x = -b / 2.0 * a;
//	printf("%lf", x);
//}
//int main()
//{
//	int a, b, c;
//	printf("输入三个数");
//	scanf("%d%d%d", &a, &b, &c);
//	double g = b * b - 4.0 * a * c;
//	if (g > 0)
//	{
//		f1(a, b, c);
//	}
//	else if (g < 0)
//	{
//		f2(a, b, c);
//	}
//	else if (g == 0)
//	{
//		f3(a, b, c);
//	}
//
//	return 0;
//}


//     矩阵的转置

//void transform (int arr1[3][3],int arr2[3][3])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j <3 ; j++)
//		{
//			arr2[j][i] = arr1[i][j];
//		}
//	}
//}
//int main()
//{
//	int arr1[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[3][3];
//	transform (arr1,arr2);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//     my_strcat

//
//void my_strcat(char a[10], char b[10])
//{
//	char c[30];
//	int i = 0;
//	int j = 0;
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		c[i] = a[i];
//	}
//	for (j = 0; b[j] != '\0'; j++)
//	{
//		c[i + j] = b[j];
//	}
//	c[i + j] = '\0';
//	puts(c);
//}
//int main()
//{
//	char a[10] = "abcdef";
//	char b[20] = "hijklm";
//	my_strcat(a, b);
//	return 0;
//}


//     统计字符串中的数据

//void f(char a[100], int b[4])
//{
//	int j = 0;
//	int i = 0;
//	for (j = 0; a[j] != '\0'; j++)
//	{
//		if (a[j] >= 65 && a[j] <= 90 || a[j] >= 97 && a[j] <= 122)
//		{
//			b[0]++;
//		}
//		else if (a[j] >= 48 && a[j] <= 57)
//		{
//			b[1]++;
//		}
//		else if (a[j] == 32)
//		{
//			b[2]++;
//		}
//		else
//		{
//			b[3]++;
//		}
//	}
//	printf("字母，数字，空格，其他字符\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", b[i]);
//	}
//}
//
//int main()
//{
//	char a[100];
//	int b[4] = { 0,0,0,0 };
//	scanf("%s", a);
//	f(a, b);
//	
//	return 0;
//}


int main()
{
	printf("hello world !");

	return 0;
}




