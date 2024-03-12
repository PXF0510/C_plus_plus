//#pragma once
#ifndef MY_STRING_H
#define MY_STRING_H
#include<iostream>
#include<string.h>
using namespace std;

class String
{
public:
	String(const char* str = 0);          //���캯��
	String(const String& s);        //������������캯��
	String& operator = (const String& s);                              //������ֵ
	~String();                      //��������

private:
	char* str_data;                 //����ַ�����ָ��
};

inline
String::String(const char* str)
{
	cout << "Ĭ�Ϲ��캯����" << endl;
	if (str)
	{
		str_data = new char[strlen(str) + 1];     //���ٶ������ڴ棬��СΪ���������ַ����ֽ���+1,char�ͱ���ռ��һ���ֽ�
		strcpy_s(str_data, strlen(str) + 1, str);
	}
	else
	{
		str_data = new char[1];
		*str_data = '\0';
	}
}


inline
String::String(const String& s)
{
	cout << "����������캯����" << endl;
	//1.�ȿ���һ��ͬ����С�Ķ����ڴ棬������ſ���������ַ���
	//���������˿������캯���������������Ĭ��ǳ�������캯����û�п����ڴ���һ����������ֱ�ӿ�����ֵ��
	//�����¶����ָ��str_dataָ��Ҫ�������Ķ���String s���ַ������ڵĶ����ڴ棬��ʱ������ָ��ָ��ͬһ���ڴ�ռ䣬
	//���¶����ȵ�����������ʱ���Ὣ�����ڴ��ͷţ��ٵ��ñ������������������ʱ�������ڴ��Ѿ����ͷţ�������ڴ�й©
	str_data = new char[strlen(s.str_data) + 1];
	//2.������ֵ�����ַ����������¿��ٵĶ����ڴ���
	strcpy_s(str_data, strlen(s.str_data) + 1, s.str_data);

}

inline
String& String::operator = (const String& s)
{

}

String::~String()
{
	//�ͷŶ����ڴ�ռ�
	if (str_data != NULL)
	{
		delete[] str_data;
		str_data = NULL;
	}

	cout << "���������ĵ��ã�" << endl;
}

void func()
{
	String s1;
	cout << "aaaaaaa" << endl;
	String s2("Hello C++ !");
	cout << "bbbbbbb" << endl;
	String s3(s2);
	cout << "ccccccc" << endl;
}
#endif // !MY_STRING_H
