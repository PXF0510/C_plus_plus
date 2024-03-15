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
		cout << "Base func 的调用" << endl;
	}
	void func(int a)
	{
		cout << "Base func(int a) 的调用" << endl;
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
		cout << "Son func 的调用" << endl;
	}

	int m_data;
};


void test()
{
	Son s;
	//同名成员变量的调用
	cout << "Son 成员变量 m_data：" << s.m_data << endl;
	cout << "Base 成员变量 m_data：" << s.Base::m_data << endl;

	//同名成员函数的调用
	s.func();
	s.Base::func();

	//子类的同名函数会将父类所有同名函数隐藏
	s.Base::func(10);
}
int main() 
{
	test();
	return 0;
}