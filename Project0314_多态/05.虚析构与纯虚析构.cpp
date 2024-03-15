//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数" << endl;
//	}
//	//虚析构函数
//	//通过父类指针释放子类对象，保证子类中的析构函数也能被调用
//	//如果子类中没有堆区数据，不用虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal析构函数" << endl;
//	//}
//	//纯虚析构函数
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数" << endl;
//}
//
//class Cat:public Animal
//{
//public:
//	Cat(const string& name)
//		:m_Name(new string(name))
//	{
//		cout << "Cat构造函数" << endl;
//	}
//
//	void speak() 
//	{
//		cout << *m_Name <<"Cat在说话" << endl;
//	}
//
//	//析构，释放内存
//	~Cat() 
//	{
//		cout << "Cat析构函数" << endl;
//		if (m_Name)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//private:
//	string* m_Name;
//};
//
//void doSpeak(Animal* ani)
//{
//	ani->speak();
//	//删除父类Animal的指针，释放内存，会调用Animal的析构函数
//	//但不会调用子类Cat的析构函数，因此子类中动态开辟的内存不会被释放
//	//要想调用子类的析构函数，将父类中的析构函数设置为虚析构函数或纯虚析构函数
//	delete ani;            
//}
//
//void test()
//{
//	//Cat c("Tom");                //实例化了一个Cat对象c,调用一次构造函数和析构
//	//Animal* c_p = new Cat("Tom");  //new 一个对象，开辟一块内存，用delete释放后，才会调用析构函数
//	//delete c_p;
//	doSpeak(new Cat("Tom"));
//}
//
//int main() 
//{
//	test();
//	return 0;
//}