#pragma once
#include<string>
#include<iostream>
using namespace std;

class Phone
{
public:
	Phone(const string& name = " ") :phone_Name(name)
	{
		cout << "Phone的构造函数：" << phone_Name << endl;
	}
	~Phone() 
	{
		cout << "Phone的析构函数" << endl;
	}
private:
	string phone_Name;
};

//类的对象作为类的成员
//构造时，先调用Phone的构造函数（由内向外）
//析构时，先调用Person的析构函数（由外向内）
class Person
{
public:
	//m_phone(phone_name) 相当于是 Phone m_phone = phone_name；
	Person(const string& m_name = " ",const string& phone_name = " ")
		:m_Name(m_name), m_phone(phone_name)
	{
		cout << "Person的构造" << endl;
	}
	~Person() { cout << "Person的析构" << endl; }

	int m_data_C;

	//静态成员变量
	//1、在编译阶段就分配内存；
	//2、所有对象共享一份数据
	//3、类内声明，类外初始化
	//4、静态成员变量也有访问权限，在private域下的静态成员变量，类外不可以访问
	static int m_data_A;

	//静态成员函数
	static void func()
	{
		m_data_A = 20;          //只能访问静态成员变量
		//m_data_C = 10;        //不能访问，由于静态成员函数是所有对象共享的，无法区分m_data_C 是哪个对象的
		cout << "static func 的调用" << endl;
	}

private:
	string m_Name;  //姓名
	Phone m_phone;  //手机
	static int m_data_B;
};

//类外初始化
int Person::m_data_A = 100;
int Person::m_data_B = 200;

void test1() 
{
	Person p1;
	Person p2;
	p2.m_data_A = 200;    //共享同一份数据

	//成员变量的访问
	//1、通过对象
	cout << p1.m_data_A << endl;

	//2、通过类名
	cout << Person::m_data_A << endl;
}

void test2()
{
	//访问一
	Person p1;
	p1.func();

	//访问二
	Person::func();
}


class CPlus
{
public:
	int m_A;         //非静态成员变量，属于类的对象上
	static int m_B;
	mutable int m_C; //用于常对象中，说明常对象的该属性可以被修改，或者在常函数中可以被修改
	void func() {};
	static void func2() {};

	CPlus(int age = 0)
		:m_age(age) 
	{ }

	CPlus& add(const CPlus& c) //使用*this返回对象本身
	{
		if (this)
		this->m_age += c.m_age;
		return *this;
	}

	//const修饰的常函数
	//this的本质是常量指针，即CPlus* const this,指针的指向不可以修改，只能修改指针指向的内容
	//用const修饰成员函数时，意味着指针变为 const CPlus* const this 即指针的指向、指针所指的内容都不可以被修改；
	//即：不能修改对象的属性（this指向调用成员函数的类对象，其属性不可被修改）
	int get_age() const
	{ 
		//this->m_A = 100;      //错误，属性不能被修改
		this->m_age = 20;       //正确，mutabl修饰的变量，可以在常函数中被修改；
		return m_age; 
	}
private:
	mutable int m_age;          
};

int CPlus::m_B = 0;


void test3()
{
	CPlus c1;
	//当c1为一个空对象，即类CPlus中没有定义任何成员时，会给空对象分配一个字节内存
	cout << "size of c1:" << sizeof(c1) << endl;
}

void test4() 
{
	CPlus c1(10);
	CPlus c2(15);

	//链式编程
	CPlus c3 = c1.add(c2).add(c2).add(c2);
	cout << c1.get_age()<<endl;
	cout << c3.get_age()<<endl;
}

void test5() 
{
	CPlus c1(10);          //普通对象
	const CPlus c2(20);    //常对象，代表其所有属性都不能被随意更改
	//c2.m_A = 100;          //错误，常对象的属性不可以被修改
	c2.m_B = 1000;          //?常对象的static变量可以被修改？satic m_B 不是对象c2特有的
	c2.m_C = 10;           //常对象的mutable变量可以被修改

	cout << c1.m_B;
	//常对象只能调用常函数，否则其他成员函数可以修改常对象的属性，错误；

}