#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



//第四次实验作业

//   3

//main()
//{
//	char s[20], t;
//	int i=0, len, n;
//	printf("请输入一个字符串\n");
//	scanf("%s", s);
//	len = strlen(s);
//	n = len - 1;
//	while (i <= len / 2)    
//	{
//		t = s[i];
//		s[i] = s[n];
//		s[n] = t;
//		i++;
//		n--;
//	}
//	printf("结果是；%s", s);
//}



//   5

//int prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n ; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()           
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (prime(i) == 1)
//			printf("%d ", i);
//	}
//}



//   6

//int power(int x, int y)
//{
//	int sum = 1;
//	int i = 0;
//	for (i = 0; i < y; i++)
//	{
//		sum *= x;
//	}
//	return sum;
//}                             
//int main()
//{
//	int x, y, s;
//	printf("输入x,y的值；\n");
//	scanf("%d%d", &x, &y);
//	s = power(x, y);
//	printf("%d\n", s);
//	return 0;
//}



//   8

//int f(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * f(n - 1);
//}
//int main()           
//{
//	int n = 0;
//	int sum = 0;
//	printf("输入n的值\n");
//	scanf("%d", &n);
//	sum = f(n);
//	printf("%d", sum);
//	return 0;
//}



//   4

//int f(char* a)
//{
//	char t;
//	int i = 0, len, n;
//	len = strlen(a);
//	n = len - 1;
//	while (i <= len / 2)
//	{
//		t = a[i];
//		a[i] = a[n];
//		a[n] = t;
//		i++;
//		n--;
//	}
//	if (a[i] == a[n])
//		return 1;
//	else
//		return -1;
//}
//main()
//{
//	char arr[20];
//	printf("输入一个字符串\n");
//	scanf("%s", arr);
//	if (f(arr) == 1)
//		printf("%s是回文\n", arr);
//	else if(f(arr)==-1)
//		printf("%s不是回文\n", arr);
//}




//第五次实验作业

//   2

//int main()
//{
//	char a[] = "good bye";
//	char* s = a;
//	s = s + 3;
//	*s = 'a';
//	printf("%s\n", a);
//	return 0;
//}

//   3

//int main()
//{
//	int arr[10];
//	int* p1, * p2, i;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", arr + i);
//	}
//	for (p1 = arr, p2 = p1; p1 < arr + 10; p1++)
//	{
//		if (*p1 > *p2)
//		{
//			p2 = p1;
//		}
//	}
//	printf("max=%d\n", *p2);
//	printf("index=%d\n",p2-arr);
//	return 0;
//}



//   4

//int main()
//{
//	int arr[10] = { 1,2,5,7,3,8,4,10,9,6 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 9; i++)
//	{
//		for (j = 0; j < 9 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	int* p = arr;
//	*(p + 5) = 40;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,11 };
//	int i = 0;
//	int* p = arr;
//	*(p + 9) = 10;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%d", 11);
//	return 0;
//}



   //5

void strdel(char *s, int v, int w)
{
	char* p1 = s + v - 1;
	char* p2 = p1 + w;
	*p1 = '\0';
	strcat(s, p2);
}
int main()
{
	char arr[] = "ABCDEFGHIGKL";
	int v, w;
	printf("输入v,w的值");
	scanf("%d%d", &v, &w);
	strdel(arr, v, w);
	printf("%s\n", arr);
	return 0;
}





