#include<iostream>
#include<string>
using namespace std;
class Test//定义一个类
{
public://公有属性
	void SetData(int data)//编写公有方法
	{
		m_data = data;
	}
	int GetData();
protected://保护属性

private://私有属性体现了封装的特性
	int m_data;//属性里面的成员
};

int Test::GetData()//类的成员函数放在类外面实现
{
	return m_data;
}
 
void main()
{
	Test t;//实例化对象t，给t开辟空间
	t.SetData(1);//
	cout << "t = " << t.GetData() << endl;
	Test t1;
	t1.SetData(100);//一个类下面新建的两个对象
	cout << "t1 = " << t1.GetData() << endl;
	system("pause");
}

//class student
//{
//public://类成员的访问属性（public、protected、private）
//	string name[10];
//	string sex[5];
//	//成员函数声明
//	string get(void);
//	void set(string n, string s);
//
//};
////成员函数定义
//string student::get(void)
//{
//	return name[10], sex[5];
//};
//
//void student::set (string n, string s)
//{
//	name = n;
//	sex = s;
//};
//
//void main()
//{
//	student stu1;
//	student stu2;
//	//定义stu1数据成员
//	stu1.name[10] ="张三";
//		stu1.sex[5]= "男";
//	//定义stu2数据成员
//		stu2.name[10] = "李娜";
//		stu2.sex[10]= "女";
//
//}