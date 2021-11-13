#include<iostream>
#include<string>
using namespace std;
class Test//定义一个类
{

	//Test&operator==(const Test &t)
	//{
	//	if (this != &t)
	//	{
	//		m_data = t.m_data;
	//	}
	//	return *this;
	//};//重载赋值函数

	//~Test()//析构函数
	//{
	//	cout << "free Test" << endl;
	//};
public:
	Test(int data =0)
	{
		m_data = data;
	}//构造函数

	Test(const Test &t)
	{
		m_data = t.m_data;
	};//拷贝构造函数方法
	Test&operator==(const Test &t)
	{
		if (this != &t)
		{
			m_data = t.m_data;
		}
		return *this;
	};//重载赋值函数
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
	//const Test *pt = &t;//通过指针接收对象地址t.operator&() -->operator&(&t)
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
//	String(const char*str = "")//构造函数
//	{
//		m_data = (char*)malloc(strlen(str) + 1);//读取代码给字符串开辟空间
//		strcpy(m_data, str);//传值
//	}
//	String(const String &s)
//	{
//		//m_data = s.m_data;
//		m_data = (char*)malloc(strlen(s.m_data) + 1);//首先给拷贝的函数申请空间
//		strcpy(m_data, s.m_data);//将值也拷贝过来
//	}
//		String&operator==(const String &s)
//		{
//			free(m_data);//释放要被拷贝函数的空间，防止内存泄漏
//			if (this != &s)//检查即将赋值的地址是否是同一块地址
//			{
//				m_data = (char*)malloc(strlen(s.m_data) + 1);//申请空间
//				strcpy(m_data, s.m_data); //进行赋值
//			}
//			return *this;
//		};//重载赋值函数
//
//
//	~String()
//	{
//		free(m_data);//将原来给对象申请的空间释放
//		m_data = nullptr;//m_data重新成为空指针
//	};
//public:
//	char *GetString()const//常方法，输出m_data
//	{
//		return m_data; 
//	}
//private:
//	char *m_data;
//};
//
//void main()  
//{
//	String str1("abc");//定义对象开辟空间 
//	cout << str1.GetString() << endl;
//	String str2 = str1;
//	cout << str2.GetString() << endl;
//
//};
