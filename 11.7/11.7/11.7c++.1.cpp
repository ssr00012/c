#include<iostream>
#include<string>
using namespace std;
class Test//����һ����
{
public://��������
	void SetData(int data)//��д���з���
	{
		m_data = data;
	}
	int GetData();
protected://��������

private://˽�����������˷�װ������
	int m_data;//��������ĳ�Ա
};

int Test::GetData()//��ĳ�Ա��������������ʵ��
{
	return m_data;
}
 
void main()
{
	Test t;//ʵ��������t����t���ٿռ�
	t.SetData(1);//
	cout << "t = " << t.GetData() << endl;
	Test t1;
	t1.SetData(100);//һ���������½�����������
	cout << "t1 = " << t1.GetData() << endl;
	system("pause");
}

//class student
//{
//public://���Ա�ķ������ԣ�public��protected��private��
//	string name[10];
//	string sex[5];
//	//��Ա��������
//	string get(void);
//	void set(string n, string s);
//
//};
////��Ա��������
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
//	//����stu1���ݳ�Ա
//	stu1.name[10] ="����";
//		stu1.sex[5]= "��";
//	//����stu2���ݳ�Ա
//		stu2.name[10] = "����";
//		stu2.sex[10]= "Ů";
//
//}