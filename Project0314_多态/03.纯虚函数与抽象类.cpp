//#include <iostream>
//using namespace std;
//
//
////抽象类
//class Base
//{
//public:
//	virtual void func() = 0;
//	//抽象类特点（eg: 父类中 virtual int add() = 0;）
//	//1、只要有一个纯虚函数，即为抽象类
//	//2、无法实例化对象
//	//3、子类必须重写抽象类中的虚函数，否则也是抽象类
//};
// 
//class Son :public Base
//{
//public:
//	void func() 
//	{
//		cout << "子类的func()调用" << endl;
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