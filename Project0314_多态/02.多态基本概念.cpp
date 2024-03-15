//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数
//	//类Animal的内部会有一个虚函数指针，指向虚函数表，表中存放虚函数的入口地址
//	virtual void speak() 
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog在说话" << endl;
//	}
//};
//
////地址早绑定 在编译阶段确定函数的入口地址
////用virtual关键字修饰父类的函数时，可以实现地址晚绑定
//
////动态多态满足条件
////1、有继承关系
////2、子类重写父类的虚函数函数
//
////动态多态的使用
////父类的指针或引用 执行子对象
//
////提倡使用多态进行开发
////1、代码组织结构清晰，可读性强
////2、利用前期后期的扩展与维护
//
//void doSpeak(Animal& animal)
//{
//	//父类的引用指向子类的对象
//	animal.speak();
//}
//void test()
//{
//	Cat c;
//	doSpeak(c);
//}
//int main() 
//{
//	test();
//	return 0;
//}