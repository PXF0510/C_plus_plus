#include <iostream>
using namespace std;

class Dad
{
public:
	Dad()
	{
		cout << "Dad 构造" << endl;
	}
	~Dad()
	{
		cout << "Dad 析构" << endl;
	}
};

class Son:public Dad
{
public:
	Son()
	{
		cout << "Son 构造" << endl;
	}
	~Son()
	{
		cout << "Son 析构" << endl;
	}
};


//先构造父类，再构造子类
//先析构子类，再析构父类
//int main() 
//{
//	Dad d;
//	Son s;
//	return 0;
//}