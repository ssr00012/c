#include<stdio.h>
#include<string.h>
//递归实现strlen
//int strlen(int n)
//{
//	if (n < 1)
//		return 0;
//	else
//	{
//		int sum = 0;
//		 sum += 1;
//		 strlen(n-1);
//		 return sum;
//	}
//}
//递归
//int my_strlen(char *str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + my_strlen(1 + str);
//}
//非递归实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str = 0;
//	scanf_s("%d", str);
//	my_strlen(&str);
//	printf("%d", my_strlen(&str));
//	while (1);
//}
//递归实现实现字符串逆序错误示范
//int reverse_string(char*string)
//{
//	int sz = sizeof(string);
//	if (sz = '\0')
//		return  0;
//	else
//	for (int i = sz; i > 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			reverse_string[i] = reverse_string[j];
//		}
//	}
	//到这里一个大卡壳住想着一定会有一个前后的交换但是在两个数字交换之前找不到合适的函数实现，例如在这里我直接用两个循环只为了实现所谓的前后交换第一次确实可以成功，就比如第五个位置的数字和第0位置的数字交换，然后存入数组是吧然后继续交换这样是错的bro不要浪费时间球球了
	//那么真正应该正确的方法是啥样的呢 我们已经学习过指针了对吧！指针！
//int reverse_string(char* string)
//{   //定义左右指针指向头尾
//	char  *left = string;
//	char *right = string + strlen(string ) - 1;
//	if (*left = *right)
//		return 0;
//	else
//	{
//
//		int tem = 0;
//		tem = *left;
//		*left = *right;
//		*right = tem;
//		//疯狂卡壳子 那到这里了怎么写呢，就是应该left++;right--了啊但是怎么加啊啊啊 哦哦直接加加直接减减无语得要死有这样的疑问也是正常的把就是说因为我还在用递归的思维来看++--的作用范围但是这里是指针指针的作用范围该是对一整个函数范围内都有用的
//		left++;
//		right--;
//		
//	}
//}
//运行不出来气死一整个 算了继续！ 递归方式的解决! 
int reverse_string(char*arr)
{
	int len = strlen(arr);

	char tmp = *arr;
	
	*arr = *(arr + len - 1);//老铁到这里我都可以理解嗷 接下来就是怎么把处理第一个最后一个元素每次递归交换
	*(arr + len - 1) = '\0';
	
	if (strlen(arr+1)>=2)
	reverse_string(arr+1);
	
	*(arr + len - 1) = tmp;
	
	/**arr += 1;
	reverse_string(arr);错的*/

}
int main()
{
	char str = '\0';
	scanf_s("%s", &str);
	reverse_string(&str);
	printf("%s", reverse_string(&str));

}