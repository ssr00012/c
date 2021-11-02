#include<stdio.h>
//判断函数是不是润年的函数 
//int leap(int year)
//{
//		if ((year % 4 == 0 )&& (4 % 100 != 0) ||( year % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//}
////判断是不是素数
//int is_prime(int n)
//{
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 021q	112q	q2
//		}
//	}
//}
//交换两个函数
//int swap(int * a, int *b)
//{
//	int c;
//	c = *a;
//	*a = *b;
//	*b = c;
//	return *a, *b;
//}
//打印整数的每一位
int pr(int * a)
{
	int sz = sizeof(a);
	if (a < 9)
	{
		printf("%d", a);
	}
	else
	{
	}
	for (int i = 0; i < sz; i++)
	{
		int n = 0;
		n = a%(i * 10);
		return n;
	}
}
int main()
{
	int a = 10;
	int b = 20;
	pr(&a);
	printf("%d",a);
	getchar();
	return 0;

}