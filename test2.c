#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//     判断机器的大小端存储
//     1

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//     2

//int check()
//{
//	union UN
//	{
//		int i;
//		char a;
//	}u;
//	u.i = 1;
//	return u.a;
//}
//
//int main()
//{
//	int ret = check();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i, n, a;
//	int sum = 0;
//	int b = 0;
//	printf("请输入a,n的值>");  //求a+aa+aaa+....
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		b = a * pow(10, i) + b;
//		sum = sum + b;
//	}
//	printf("%d", sum);
//	return 0;
//}



//int main()
//{
//	float a, x0, x1;
//	printf("请输入一个数：");     //迭代法求x=sqrt(a)
//	scanf("%f", &a);
//	x0 = a / 2;
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;
//	} while (fabs(x0 - x1 )>= 1e-5);
//		printf("%f的平方根为%f\n",a,x1);
//	return 0;
//}



//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);  //递归法输出一个数各各位的数
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//int my_stren(char* str)
//{
//	
//	if (*str != '\0')
//		return 1 + my_stren(str + 1);  //递归法求字符串长度
//	else
//	return 0;
//}
//int main()
//{
//	char arr[] ="bit";
//	int len=my_stren(arr);
//	printf("len=%d", len);
//}



//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);     //递归法求n!
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("%d\n", ret);
//}



//int fib(int x)
//{
//	/*if (x <= 2)
//		return 1;
//	else
//		return fib(x - 1) + fib(x - 2);*/
//		//求第n个斐波那契数(太慢)
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fib(n);
//	printf("%d\n", ret);
//}



  //计算器
//void menu()
//{
//	printf("******************\n");
//	printf("  1 Add    2 Sub  \n");
//	printf("  3 Mul    4 Div  \n");
//	printf("******************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//    int y = 0;
//	int(*arr[])(int, int) = { 0,Add,Sub,Mul,Div };     //转移表
//	do
//	{
//		menu();
//		printf("请选择\n");
//		printf("input=> \n");
//		scanf("%d", &input);
//		if (input >= 1 && input < 6)
//		{
//			printf("输入两个数\n");
//			scanf("%d%d", &x, &y);
//			int ret = arr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}



   //冒泡排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//			    arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,4,3,2,1,7,5,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



   //qsort的使用
//int com_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test()
//{
//	float arr[] = {2.0,3.0,1.0,6.0,7.0,4.0,9.0,5.0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_float);
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}



   //my_qsort的实现
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较实现
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//		}
//	}
//}
//
//int com_float(const void* e1, const void* e2)
//{
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//
//void test()
//{
//	float arr[] = { 2.0,3.0,1.0,6.0,7.0,4.0,9.0,5.0 ,8.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), com_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}
//
//int main()
//{
//	test();
//	return 0;
//}





//     结构体

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//
//	return 0;
//}


//      枚举

//enum color
//{
//	red,
//	gerrn,
//	yellow,
//};
//
//int main()
//{
//	enum color m;
//	printf("%d\n", red);
//	return 0;
//}


//     位段
struct s
{
	int a : 2;
	int b : 5;
	int c : 10;
	int d : 30;
};

int main()
{
	struct s e;
	printf("%d\n",sizeof(e));
}


