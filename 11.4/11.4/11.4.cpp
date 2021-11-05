#include<stdio.h>
#include<stdlib.h>
//用递归(使用当前函数重复实现功能)非递归()的方式实现函数阶乘
//int Fac(int N)
//{
//	if (N <= 1)
//		return 1;
//
//	return Fac(N - 1)*N;
//}
//非递归算法
//void fac(int* N)
//{
//	int ret = 1;
//	for (int i = 2; i <= *N; i++)
//	{
//		ret = i*ret;
//		printf("%d\n",ret);
//	}
//	while (1);
//}