#include <iostream>
using namespace std;


class Base
{
public:
	Base()
		:m_data(10)
	{ }
	void func() 
	{
		cout << "Base func �ĵ���" << endl;
	}
	void func(int a)
	{
		cout << "Base func(int a) �ĵ���" << endl;
	}

	int m_data;
};

class Son:public Base
{
public:
	Son()
		:m_data(100)
	{ }
	void func()
	{
		cout << "Son func �ĵ���" << endl;
	}

	int m_data;
};


void test()
{
	Son s;
	//ͬ����Ա�����ĵ���
	cout << "Son ��Ա���� m_data��" << s.m_data << endl;
	cout << "Base ��Ա���� m_data��" << s.Base::m_data << endl;

	//ͬ����Ա�����ĵ���
	s.func();
	s.Base::func();

	//�����ͬ�������Ὣ��������ͬ����������
	s.Base::func(10);
}
int main() 
{
	test();
	return 0;
}