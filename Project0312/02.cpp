#include"myvar.h"
void _cout() 
{
	std::cout << var_const_1;
}

//void func(int a, int)
//{
//	cout << "this is a func" << endl;
//}

void func(int& a)
{
	cout << "this is int& a 的函数" << endl;
}
void func(const int& a)
{
	cout << "this is const int& a 的函数" << endl;
}
