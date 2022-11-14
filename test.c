#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


//     二进制转换
//      
//#define STACK_INIT_SIZE 20
//#define STACKINGREMENT 10
//
//typedef char Element;
//
//typedef struct
//{
//	Element* base;
//	Element* top;
//	int stacksize;
//}sqtack;
//
//void Initstack(sqtack* s)
//{
//	s->base = (Element*)malloc(STACK_INIT_SIZE * sizeof(Element));
//	if (!s->base)
//	{
//		exit(0);
//	}
//	s->top = s->base;
//	s->stacksize = STACK_INIT_SIZE;
//}
//
//void Pushstack(sqtack* s, Element e)
//{
//	if (s->top - s->base >= s->stacksize)
//	{
//		exit(0);
//	}
//	if (!s->base)
//	{
//		exit(0);
//	}
//	*(s->top) = e;
//	s->top++;
//}
//
//void Popstack(sqtack* s, Element* e)
//{
//	if (s->top == s->base)
//	{
//		return;
//	}
//	*e = *--(s->top);
//}
//
//int Stacklen(sqtack s)
//{
//	return (s.top - s.base);
//}
//
//int main()
//{
//	Element c;
//	sqtack s;
//	int len, i, sum = 0;
//
//	Initstack(&s);
//
//	printf("输入一个二进制的数，#为结束标志\n");
//	scanf("%c", &c);
//	while (c != '#')
//	{
//		Pushstack(&s, c);
//		scanf("%c", &c);
//	}
//	getchar();
//	len = Stacklen(s);
//	printf("栈的当前容量是：%d\n", len);
//	for (i = 0; i < len; i++)
//	{
//		Popstack(&s, &c);
//		sum = sum + (c - 48) * pow(2, i);
//	}
//	printf("结果是：%d\n", sum);
//	return 0;
//}


//     逆波兰计算器

//#define STACKINGREMENT 10
//
//typedef char Element;
//
//typedef struct
//{
//	Element* base;
//	Element* top;
//	int stacksize;
//}sqtack;
//
//void Initstack(sqtack* s)
//{
//	s->base = (Element*)malloc(STACK_INIT_SIZE * sizeof(Element));
//	if (!s->base)
//	{
//		exit(0);
//	}
//	s->top = s->base;
//	s->stacksize = STACK_INIT_SIZE;
//}
//
//void Pushstack(sqtack* s, Element e)
//{
//	if (s->top - s->base >= s->stacksize)
//	{
//		exit(0);
//	}
//	if (!s->base)
//	{
//		exit(0);
//	}
//	*(s->top) = e;
//	s->top++;
//}
//
//void Popstack(sqtack* s, Element* e)
//{
//	if (s->top == s->base)
//	{
//		return;
//	}
//	*e = *--(s->top);
//}
//
//int Stacklen(sqtack s)
//{
//	return (s.top - s.base);
//}
//
//
//int main()
//{
//	sqtack s;
//	char c;
//	double d, e;
//	char str[STACKINGREMENT];
//	int i = 0;
//	Initstack(&s);
//	printf("按照逆波兰计算器格式输入，以#为结束标志\n");
//	scanf("%c", &c);
//	while(c != '#')
//	{
//		while (isdigit(c) || c == '.')    //  用于过滤数字
//		{
//			str[i++] = c;
//			str[i] = '\0';
//			if (i >= 10)
//			{
//				printf("输入的数目过大");
//				return -1;
//			}
//			scanf("%c", &c);
//
//			if (c == ' ')                 //   转换为double型
//			{
//				d = atof(str);
//				Pushstack(&s, d);
//				i = 0;
//				break;
//			}
//		}
//		switch (c)
//		{
//		case '+':
//			Popstack(&s, &e);
//			Popstack(&s, &d);
//			Pushstack(&s, d + e);
//			break;
//		case '-':
//			Popstack(&s, &e);
//			Popstack(&s, &d);
//			Pushstack(&s, d - e);
//			break;
//		case '*':
//			Popstack(&s, &e);
//			Popstack(&s, &d);
//			Pushstack(&s, d * e);
//			break;
//		case '/':
//			Popstack(&s, &e);
//			Popstack(&s, &d);
//			if (e != 0)
//			{
//				Pushstack(&s, d / e);
//			}
//			else
//			{
//				printf("输入错误\n");
//				return -1;
//			}
//			break;
//		}
//		scanf("%c", &c);
//	}
//	Popstack(&s, &d);
//	printf("最后的结果是 %f", d);
//	return 0;
//}


//  递归法遍历二叉树
//  指出每个元素的层数

//typedef char Elemtype;
//typedef struct Bitnode
//{
//	char date;
//	struct Bitnode* lchild;
//	struct Bitnode* rchild;
//} Bitnode, * Bittree;
//
////创建一棵二叉树
//Creattree(Bittree* T)
//{
//	char c;
//	scanf("%c", &c);
//	if (' ' == c)
//	{
//		*T = NULL;
//	}
//	else
//	{
//		*T = (Bitnode*)malloc(sizeof(Bitnode));
//		(*T)->date = c;
//		Creattree(&(*T)->lchild);
//		Creattree(&(*T)->rchild);
//
//	}
//}
//
//
//visit(char c,int leavel)
//{
//	printf("%c位于第%d层\n",c, leavel);
//}
////遍历二叉树
//Traversing(Bittree T, int leavel)
//{
//	if (T)
//	{
//		visit(T->date ,leavel);
//		Traversing(T->lchild, leavel + 1);
//		Traversing(T->rchild, leavel + 1);
//	}
//}
//
//int main()
//{
//	int leavel = 1;
//	Bittree T;
//	Creattree(&T);
//	Traversing(T, leavel);
//	return 0;
//}



//汉诺塔问题实现

void move(char x, char y)
{
	printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three)
{
	if (n == 1)
	{
		move(one, three);
	}
	else
	{
		hanoi(n - 1, one, three, two);
		move(one, three);
		hanoi(n - 1, two, one, three);
	}
}

int main()
{
	int m;
	printf("input the number of diskes:");
	scanf("%d", &m);
	printf("The step to move %d diskes:\n", m);
	hanoi(m, 'A', 'B', 'C');
	return 0;
}


