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
	cout << "this is int& a �ĺ���" << endl;
}
void func(const int& a)
{
	cout << "this is const int& a �ĺ���" << endl;
}
