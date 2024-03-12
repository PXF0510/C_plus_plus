//#pragma once
#ifndef _MYVAR_
#define _MYVAR_
#include <iostream>

using namespace std;

//1、const共享修饰的变量
extern const int var_const_1;

void _cout();

struct Student
{
	string name;
	int age;
	float score;
};

//函数的占位参数(形参为一个数据类型)
//void func(int a = 0,int = 10);

//函数的重载
void func(int& a);      //int& a = 10;非法，引用的对象必须是堆区或栈区的变量，常量10存放在全局区
void func(const int& a);//const int& a = 10;合法
#endif // !_MYVAR_
