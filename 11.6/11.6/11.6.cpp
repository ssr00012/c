#include<stdio.h>
#include<string.h>
//�ݹ�ʵ��strlen
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
//�ݹ�
//int my_strlen(char *str)
//{
//	if ('\0' == *str)
//		return 0;
//	else
//		return 1 + my_strlen(1 + str);
//}
//�ǵݹ�ʵ��strlen
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
//�ݹ�ʵ��ʵ���ַ����������ʾ��
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
	//������һ���󿨿�ס����һ������һ��ǰ��Ľ����������������ֽ���֮ǰ�Ҳ������ʵĺ���ʵ�֣�������������ֱ��������ѭ��ֻΪ��ʵ����ν��ǰ�󽻻���һ��ȷʵ���Գɹ����ͱ�������λ�õ����ֺ͵�0λ�õ����ֽ�����Ȼ����������ǰ�Ȼ��������������Ǵ��bro��Ҫ�˷�ʱ��������
	//��ô����Ӧ����ȷ�ķ�����ɶ������ �����Ѿ�ѧϰ��ָ���˶԰ɣ�ָ�룡
//int reverse_string(char* string)
//{   //��������ָ��ָ��ͷβ
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
//		//��񿨿��� �ǵ���������ôд�أ�����Ӧ��left++;right--�˰�������ô�Ӱ����� ŶŶֱ�ӼӼ�ֱ�Ӽ��������Ҫ��������������Ҳ�������İѾ���˵��Ϊ�һ����õݹ��˼ά����++--�����÷�Χ����������ָ��ָ������÷�Χ���Ƕ�һ����������Χ�ڶ����õ�
//		left++;
//		right--;
//		
//	}
//}
//���в���������һ���� ���˼����� �ݹ鷽ʽ�Ľ��! 
int reverse_string(char*arr)
{
	int len = strlen(arr);

	char tmp = *arr;
	
	*arr = *(arr + len - 1);//�����������Ҷ��������� ������������ô�Ѵ����һ�����һ��Ԫ��ÿ�εݹ齻��
	*(arr + len - 1) = '\0';
	
	if (strlen(arr+1)>=2)
	reverse_string(arr+1);
	
	*(arr + len - 1) = tmp;
	
	/**arr += 1;
	reverse_string(arr);���*/

}
int main()
{
	char str = '\0';
	scanf_s("%s", &str);
	reverse_string(&str);
	printf("%s", reverse_string(&str));

}