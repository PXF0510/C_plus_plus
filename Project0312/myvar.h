//#pragma once
#ifndef _MYVAR_
#define _MYVAR_
#include <iostream>

using namespace std;

//1��const�������εı���
extern const int var_const_1;

void _cout();

struct Student
{
	string name;
	int age;
	float score;
};

//������ռλ����(�β�Ϊһ����������)
//void func(int a = 0,int = 10);

//����������
void func(int& a);      //int& a = 10;�Ƿ������õĶ�������Ƕ�����ջ���ı���������10�����ȫ����
void func(const int& a);//const int& a = 10;�Ϸ�
#endif // !_MYVAR_
