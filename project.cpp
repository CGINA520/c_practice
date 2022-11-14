#define _CRT_SECURE_NO_WARNINGS 

//#include<stack>
//#include<map>
//
//typedef char oper;
//typedef float operand;
//typedef struct { int left, right; } oper_num;
//std::stack<oper> opers;
//std::stack<operand> operands;
//std::map<oper, oper_num> oper_nums;
//void init()
//{
//	oper_nums['='] = { 1000,1000 };
//	oper_nums['+'] = { 21,22 };
//	oper_nums['-'] = { 21,22 };
//	oper_nums['*'] = { 11,12 };
//	oper_nums['/'] = { 11,12 };
//}
//operand calc(operand x, oper op, operand y)
//{
//	switch (op) {
//	case '+': return x + y;
//	case '-': return x - y;
//	case '*': return x * y;
//	case '/': return x / y;
//	}
//	return -1;
//}
//void alg()
//{
//	operand x, y;
//	oper op, op1;
//	opers.push('=');
//	while (1) {
//		scanf("%f", &x);
//		operands.push(x);
//		scanf("%c", &op);
//		op1 = opers.top();
//		while (oper_nums[op].right > oper_nums[op1].left)
//		{
//			y = operands.top();
//			operands.pop();
//			x = operands.top();
//			operands.pop();
//			opers.pop();
//			operands.push(calc(x, op1, y));
//			op1 = opers.top();
//		}
//		if (oper_nums[op].right < oper_nums[op1].left) {
//			opers.push(op);
//			continue;
//		}
//		if (oper_nums[op].right == oper_nums[op1].left)
//			break;
//
//	}
//}
//
//int main()
//{
//	init();
//	alg();
//	printf("%g\n", operands.top());
//	return 0;
//}



// 斐波那契数

//#include <stdio.h>
//#include <time.h>
//#include <limits.h>
//#include <list>
//#include <deque>
//
//typedef std::list<char> BIGNUM;
//BIGNUM add(BIGNUM a, BIGNUM b)
//{
//	int c = 0, t;
//	BIGNUM s(b.size());
//	for (auto x = s.rbegin(), y = b.rbegin(),z=s.rbegin(); y != b.rend(); ++y, ++z)
//	{
//		t = (x==a.rend()?0:*x++) + *y + c;
//		*z = t % 10;
//		c = t / 10;
//	}
//	if (c)
//		s.push_front(c);
//	return s;
//}
//
//BIGNUM f(int n)
//{
//	BIGNUM a(1,1), b(1,1), c;
//	int k;
//	for (k = 3; k <= n; ++k)
//		c = add(a, b);
//	    a = b,
//		b = c;
//		return c;
//}
//
//int main()
//{
//	int n;
//	long long t0, t1;
//	BIGNUM m;
//	scanf("%d", &n);
//	t0 = clock();
//	m = f(n);
//	t1 = clock();
//	printf("共有%d位，时间：%ld\n",m.size(),t1-t0);
//		for (auto e : m)                             //auto是自动转换类型
//		{
//			printf("%d", e);
//			printf("\n");
//		}
//			
//	return 0;
//}



//  阶乘

//typedef std::deque<char> BIGNUM;
//BIGNUM multiply(BIGNUM a, int f)
//{
//	
//	BIGNUM s(a.size());
//	int carry = 0;
//	for (auto x = a.rbegin(),z=s.rbegin(); x != a.rend(); ++x, ++z)
//	{
//		int t = *x * f + carry;
//		*z = t % 10;
//		carry = t / 10;
//	}
//	while (carry)
//	{
//		s.push_front(carry % 10);
//		carry /= 10;
//	}
//		
//	return s;
//}
//
//BIGNUM f(int n)
//{
//	BIGNUM a(1, 1), c;
//	int k;
//	for (k = 2; k <= n; ++k)
//	{
//		c = multiply(a, k);
//	    a = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n;
//	long long t0, t1;
//	BIGNUM m;
//	scanf("%d", &n);
//	t0 = clock();
//	m = f(n);
//	t1 = clock();
//	printf("共有%d位，时间：%ld\n", m.size(), t1 - t0);
//	for (auto e : m)                                   //auto是自动转换类型
//	{
//		printf("%d", e);
//	}
//
//	return 0;
//}




# include <stdio.h>
# include <math.h>
float f(float x);
{
	return x * x * x - x - 1;
}
int main()
{
	float a = 1.0;
	float b = 1.5;
	while (1)
	{
		float mid = (a + b) / 2;
		if (fabs(f(mid) > 1e-5))
		{
			if (f(mid) == 0)
			{
				return mid;
				break;
			}
			if ((f(a) * f(mid)) > 0)
			{
			    a = mid;
			}
			else
				b = mid;
		}
	}
	float mid = (a + b) / 2;
	printf("%f\n", mid);
}
