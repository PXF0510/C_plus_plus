#pragma once
#include<string>
#include<iostream>
using namespace std;

class Phone
{
public:
	Phone(const string& name = " ") :phone_Name(name)
	{
		cout << "Phone�Ĺ��캯����" << phone_Name << endl;
	}
	~Phone() 
	{
		cout << "Phone����������" << endl;
	}
private:
	string phone_Name;
};

//��Ķ�����Ϊ��ĳ�Ա
//����ʱ���ȵ���Phone�Ĺ��캯�����������⣩
//����ʱ���ȵ���Person�������������������ڣ�
class Person
{
public:
	//m_phone(phone_name) �൱���� Phone m_phone = phone_name��
	Person(const string& m_name = " ",const string& phone_name = " ")
		:m_Name(m_name), m_phone(phone_name)
	{
		cout << "Person�Ĺ���" << endl;
	}
	~Person() { cout << "Person������" << endl; }

	int m_data_C;

	//��̬��Ա����
	//1���ڱ���׶ξͷ����ڴ棻
	//2�����ж�����һ������
	//3�����������������ʼ��
	//4����̬��Ա����Ҳ�з���Ȩ�ޣ���private���µľ�̬��Ա���������ⲻ���Է���
	static int m_data_A;

	//��̬��Ա����
	static void func()
	{
		m_data_A = 20;          //ֻ�ܷ��ʾ�̬��Ա����
		//m_data_C = 10;        //���ܷ��ʣ����ھ�̬��Ա���������ж�����ģ��޷�����m_data_C ���ĸ������
		cout << "static func �ĵ���" << endl;
	}

private:
	string m_Name;  //����
	Phone m_phone;  //�ֻ�
	static int m_data_B;
};

//�����ʼ��
int Person::m_data_A = 100;
int Person::m_data_B = 200;

void test1() 
{
	Person p1;
	Person p2;
	p2.m_data_A = 200;    //����ͬһ������

	//��Ա�����ķ���
	//1��ͨ������
	cout << p1.m_data_A << endl;

	//2��ͨ������
	cout << Person::m_data_A << endl;
}

void test2()
{
	//����һ
	Person p1;
	p1.func();

	//���ʶ�
	Person::func();
}


class CPlus
{
public:
	int m_A;         //�Ǿ�̬��Ա������������Ķ�����
	static int m_B;
	mutable int m_C; //���ڳ������У�˵��������ĸ����Կ��Ա��޸ģ������ڳ������п��Ա��޸�
	void func() {};
	static void func2() {};

	CPlus(int age = 0)
		:m_age(age) 
	{ }

	CPlus& add(const CPlus& c) //ʹ��*this���ض�����
	{
		if (this)
		this->m_age += c.m_age;
		return *this;
	}

	//const���εĳ�����
	//this�ı����ǳ���ָ�룬��CPlus* const this,ָ���ָ�򲻿����޸ģ�ֻ���޸�ָ��ָ�������
	//��const���γ�Ա����ʱ����ζ��ָ���Ϊ const CPlus* const this ��ָ���ָ��ָ����ָ�����ݶ������Ա��޸ģ�
	//���������޸Ķ�������ԣ�thisָ����ó�Ա����������������Բ��ɱ��޸ģ�
	int get_age() const
	{ 
		//this->m_A = 100;      //�������Բ��ܱ��޸�
		this->m_age = 20;       //��ȷ��mutabl���εı����������ڳ������б��޸ģ�
		return m_age; 
	}
private:
	mutable int m_age;          
};

int CPlus::m_B = 0;


void test3()
{
	CPlus c1;
	//��c1Ϊһ���ն��󣬼���CPlus��û�ж����κγ�Աʱ������ն������һ���ֽ��ڴ�
	cout << "size of c1:" << sizeof(c1) << endl;
}

void test4() 
{
	CPlus c1(10);
	CPlus c2(15);

	//��ʽ���
	CPlus c3 = c1.add(c2).add(c2).add(c2);
	cout << c1.get_age()<<endl;
	cout << c3.get_age()<<endl;
}

void test5() 
{
	CPlus c1(10);          //��ͨ����
	const CPlus c2(20);    //�����󣬴������������Զ����ܱ��������
	//c2.m_A = 100;          //���󣬳���������Բ����Ա��޸�
	c2.m_B = 1000;          //?�������static�������Ա��޸ģ�satic m_B ���Ƕ���c2���е�
	c2.m_C = 10;           //�������mutable�������Ա��޸�

	cout << c1.m_B;
	//������ֻ�ܵ��ó�����������������Ա���������޸ĳ���������ԣ�����

}