//#pragma once
#ifndef MY_STRING_H
#define MY_STRING_H
#include<iostream>
#include<string.h>
using namespace std;

class String
{
public:
	String(const char* str = 0);          //构造函数
	String(const String& s);        //深拷贝，拷贝构造函数
	String& operator = (const String& s);                              //拷贝赋值
	~String();                      //析构函数

private:
	char* str_data;                 //存放字符串的指针
};

inline
String::String(const char* str)
{
	cout << "默认构造函数！" << endl;
	if (str)
	{
		str_data = new char[strlen(str) + 1];     //开辟堆区的内存，大小为传进来的字符串字节数+1,char型变量占用一个字节
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
	cout << "调用深拷贝构造函数！" << endl;
	//1.先开辟一块同样大小的堆区内存，用来存放拷贝对象的字符串
	//如果不定义此拷贝构造函数，编译器会调用默认浅拷贝构造函数，没有开辟内存这一操作，而是直接拷贝赋值，
	//即将新对象的指针str_data指向要被拷贝的对象String s的字符串所在的堆区内存，此时有两个指针指向同一块内存空间，
	//当新对象先调用析构函数时，会将堆区内存释放，再调用被拷贝对象的析构函数时，由于内存已经被释放，会产生内存泄漏
	str_data = new char[strlen(s.str_data) + 1];
	//2.拷贝赋值，将字符串拷贝到新开辟的堆区内存中
	strcpy_s(str_data, strlen(s.str_data) + 1, s.str_data);

}

inline
String& String::operator = (const String& s)
{

}

String::~String()
{
	//释放堆区内存空间
	if (str_data != NULL)
	{
		delete[] str_data;
		str_data = NULL;
	}

	cout << "析构函数的调用！" << endl;
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
