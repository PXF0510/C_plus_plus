//#include <iostream>
//using namespace std;
//
//
////������
//class Base
//{
//public:
//	virtual void func() = 0;
//	//�������ص㣨eg: ������ virtual int add() = 0;��
//	//1��ֻҪ��һ�����麯������Ϊ������
//	//2���޷�ʵ��������
//	//3�����������д�������е��麯��������Ҳ�ǳ�����
//};
// 
//class Son :public Base
//{
//public:
//	void func() 
//	{
//		cout << "�����func()����" << endl;
//	}
//};
//
//void test() 
//{
//	//Base s;
//	//new Base;
//	Base* b_p = new Son;
//	b_p->func();
//}
//
//int main()
//{
//	test();
//	return 0;
//}