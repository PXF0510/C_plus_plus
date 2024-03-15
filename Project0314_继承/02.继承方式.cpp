#include <iostream>
using namespace std;

//继承方式
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

//公共继承
class Son1 :public Base
{
public:
	void func()
	{
		m_A = 100;    //父类中的公有成员，到子类中为公有成员，子类中可以访问
		m_B = 200;    //父类中的保护成员，到子类中为保护成员，子类中可以访问
		//m_C = 30;   //父类中的私有成员，子类中不可访问
	}
};

void test01() 
{
	Son1 s;
	s.m_A = 100;     //父类中的公有成员，到子类中为公有成员，子类外可以访问
	//s.m_B = 20;    //父类中的保护成员，到子类中为保护成员，子类外不可以访问
}

//保护继承
class Son2 :protected Base
{
public:
	void func()
	{
		m_A = 100;    //父类中的公有成员，到子类中为保护成员，子类中可以访问
		m_B = 200;    //父类中的保护成员，到子类中为保护成员，子类中可以访问
		//m_C = 30;   //父类中的私有成员，子类中不可访问
	}
};

void test02()
{
	Son2 s;
	//s.m_A = 100;   //父类中的公有成员，到子类中为保护成员，子类外不可以访问
	//s.m_B = 20;    //父类中的保护成员，到子类中为保护成员，子类外不可以访问
}

//私有继承
class Son3 :private Base
{
public:
	void func()
	{
		m_A = 100;    //父类中的公有成员，到子类中为私有成员，子类中可以访问
		m_B = 200;    //父类中的保护成员，到子类中为私有成员，子类中可以访问
		//m_C = 30;   //父类中的私有成员，子类中不可访问
	}
};

void test03()
{
	Son3 s;
	//s.m_A = 100;   //父类中的公有成员，到子类中为私有成员，子类外不可以访问
	//s.m_B = 20;    //父类中的保护成员，到子类中为私有成员，子类外不可以访问
}

//私有继承的子类的子类
class GrandSon :public Son3
{
public:
	void func()
	{
		//m_A = 100;    //说明父类Son3中的m_A、m_B为私有成员，子类GrandSon中不可访问
		//m_B = 200;    
	}
};

//public：完全没有保护成员
//protceted 作用：保护了成员，同时，可以保证子类继承时可以访问，且还受到保护
//private: 完全保护了成员，子类不可以访问
//int main()
//{
//	test01();
//	return 0;
//}