#include<iostream>
#include<string>
using namespace std;
class Test//����һ����
{

	//Test&operator==(const Test &t)
	//{
	//	if (this != &t)
	//	{
	//		m_data = t.m_data;
	//	}
	//	return *this;
	//};//���ظ�ֵ����

	//~Test()//��������
	//{
	//	cout << "free Test" << endl;
	//};
public:
	Test(int data =0)
	{
		m_data = data;
	}//���캯��

	Test(const Test &t)
	{
		m_data = t.m_data;
	};//�������캯������
	Test&operator==(const Test &t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	};//���ظ�ֵ����
public:
	Test *operator&()
	{
		return this;
	}
	const Test *operator&()const
	{
		return this;
	}
	int GetData()const
	{
		return m_data;
	}
	//void GetData(Test *const this)
	//void GetData(const Test * const this)
private:
	int m_data;
};
void mian()
{
	 const Test t(10);
	//const Test *pt = &t;//ͨ��ָ����ն����ַt.operator&() -->operator&(&t)
};

//int main()
//{   
//	Test t2(100);
//	Test t3, t4;
//	t4 = t3 = t2; 
//	while (1);
//};

//class String
//{
//public:
//	String(const char*str = "")//���캯��
//	{
//		m_data = (char*)malloc(strlen(str) + 1);//��ȡ������ַ������ٿռ�
//		strcpy(m_data, str);//��ֵ
//	}
//	String(const String &s)
//	{
//		//m_data = s.m_data;
//		m_data = (char*)malloc(strlen(s.m_data) + 1);//���ȸ������ĺ�������ռ�
//		strcpy(m_data, s.m_data);//��ֵҲ��������
//	}
//		String&operator==(const String &s)
//		{
//			free(m_data);//�ͷ�Ҫ�����������Ŀռ䣬��ֹ�ڴ�й©
//			if (this != &s)//��鼴����ֵ�ĵ�ַ�Ƿ���ͬһ���ַ
//			{
//				m_data = (char*)malloc(strlen(s.m_data) + 1);//����ռ�
//				strcpy(m_data, s.m_data); //���и�ֵ
//			}
//			return *this;
//		};//���ظ�ֵ����
//
//
//	~String()
//	{
//		free(m_data);//��ԭ������������Ŀռ��ͷ�
//		m_data = nullptr;//m_data���³�Ϊ��ָ��
//	};
//public:
//	char *GetString()const//�����������m_data
//	{
//		return m_data; 
//	}
//private:
//	char *m_data;
//};
//
//void main()  
//{
//	String str1("abc");//������󿪱ٿռ� 
//	cout << str1.GetString() << endl;
//	String str2 = str1;
//	cout << str2.GetString() << endl;
//
//};
