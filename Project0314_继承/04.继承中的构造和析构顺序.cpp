#include <iostream>
using namespace std;

class Dad
{
public:
	Dad()
	{
		cout << "Dad ����" << endl;
	}
	~Dad()
	{
		cout << "Dad ����" << endl;
	}
};

class Son:public Dad
{
public:
	Son()
	{
		cout << "Son ����" << endl;
	}
	~Son()
	{
		cout << "Son ����" << endl;
	}
};


//�ȹ��츸�࣬�ٹ�������
//���������࣬����������
//int main() 
//{
//	Dad d;
//	Son s;
//	return 0;
//}