#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>
#include <math.h>



    //�ú����������ʼ������ӡ����������ȡ��
//void INIT(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//INIT(arr, sz);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}



   //��һ���������Ʋ���1�ĸ���
//int count_bit( int n)
//{
//	int count = 0;
	/*while (n != 0)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}*/


	/*int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}*/


	/*while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}*/
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = count_bit(n);
//	printf("count=%d\n", count);
//	return 0;
//}



   //�����������Ʋ�ͬλ�ĸ���
//int diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return count_bit(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}



   //��ӡһ������������żλ����
//void print(int n)
//{
//	int i = 0;
//	printf("ż��λ\n");
//	for (i = 31; i >= 1; i-=2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("����λ\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}



   //��ָ���Ժ�����ʽ��ӡ�����е�Ԫ��
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



   //���õ���������������������ֵ
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\nb=%d", a, b);
//}



    //��ӡ�˷��ھ���
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}



   //�ݹ�ʵ���ַ�����ת
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	int sz = my_strlen(arr);
//	char tmp = arr[0];
//	arr[0] = arr[sz - 1];
//	arr[sz - 1] = '\0';
//	if(my_strlen(arr+1)>=2)
//	  reverse_string(arr + 1);
//	arr[sz - 1] = tmp;
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



   //��һ�����ĸ���λ���ĺ�
//int dignum(int n)
//{
//	if (n > 9)
//	{
//		return dignum(n / 10) + n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = dignum(n);
//	printf("sum=%d\n", sum);
//	return 0;
//}



   //�ݹ���m^n
//double power(int m, int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n < 0)
//	{
//		return 1.0 / power(m, -n);
//	}
//	else
//		return m * power(m, n - 1);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	double ret = power(m, n);
//	printf("%lf", ret);
//}



   //my_strlen����
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//}



//   ������

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		//��λ��
//		while (tmp/=10)
//		{
//			n++;
//		}
//		//��ÿλ��֮��
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		//�жϲ����
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//   ���εĴ�ӡ

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}



//   ����ˮ

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}



//   ������ż������

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (arr[left] != arr[right])
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//   ��ת�ַ���������ʵ�֣�
//   ����1

//void left_move(char* arr, int k)
//{
//	int i = 0;
//	int len =(int)strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j <len-1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1 ) = tmp;
//	}
//}
//
//int main()
//{ 
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


//   ����2
//#include <cassert>

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}

//void left_move(char* arr, int k)
//{
//	int len = (int)strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
   
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 4);
//	printf("%s\n", arr);
//	return 0;
//}



//   �ж��ַ�����ת(������ʽʵ��)

//#include <cassert>
//
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	int len = (int)strlen(arr);
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//int is_left_move(char* s1, char* s2)
//{
//	int i = 0;
//	int len = (int)strlen(s1);
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}


//    ��2�ַ��� 

//int is_left_move(char* str1, char* str2)
//{
//	int len = (int)strlen(str1);
//	int len1 = (int)strlen(str2);
//	if (len != len1)
//		return 0;
//	strncat(str1, str1, len);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	
//	char arr1[30] = "abcdef";
//	char arr2[] = "bcde";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//		
//	return 0;
//}



//   ��������

//int FindNum(int arr[3][3], int k, int* row, int* col)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x <= *row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 3;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 4; // ����Ҫ���ҵ���
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] < k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d", arr[mid-1]);
//			break;
//		}
//	}
//	return 0;
//}



# include <stdio.h>
# include <math.h>

float f(float x)
{
	return ( x * x * x - x - 1);
}

int main()
{
	float a = 1.0;
	float b = 1.5;
	float mid;
	do
	{
		mid = (a + b) / 2;
		if(f(a)*f(mid)>0)
		{
			a = mid;
		}
		else
			b = mid;
	}while (fabs(f(mid)) >= 1e-5);
		printf("%f", mid);
	return 0;
}
