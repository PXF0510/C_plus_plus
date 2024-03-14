#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//虚继承
class Sheep :virtual public Animal
{
};

//虚继承
class Camp :virtual public Animal
{

};

//菱形继承
class SheepCamp :public Sheep, public Camp
{

};

void test()
{
	SheepCamp s;
	s.Sheep::m_Age = 18;//SheepCamp 父类1 Sheep 继承了一份Animal父类的数据 m_Age
	s.Camp::m_Age = 28; //SheepCamp 父类2 Camp 也继承了一份Animal父类的数据 m_Age

	//cout << "s 的年龄：" << s.m_Age << endl;  //访问冲突，得加类名作用域
	cout << "s 在 Sheep 类的年龄：" << s.Sheep::m_Age << endl;
	cout << "s 在 Camp 类的年龄：" << s.Camp::m_Age << endl;

	//采用virtual关键字，将Sheep与Camp变为虚继承，保证数据m_Age只有一份 
	//Sheep 类继承的是 父类 Animal的一个虚基类指针，指向的是Sheep虚基类表
	//Camp 类继承的是 父类 Animal的一个虚基类指针，指向的是Camp虚基类表
	//表中存放的是访问数据 m_Age 的地址偏移，保证m_Age数据只有一份，都可以访问到
	cout << "s 的年龄：" << s.m_Age << endl; 
	cout << "s 在 Sheep 类的年龄：" << s.Sheep::m_Age << endl;
	cout << "s 在 Camp 类的年龄：" << s.Camp::m_Age << endl;
}

int main()
{
	test();
	return 0;
}