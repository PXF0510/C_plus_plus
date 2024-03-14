#include <iostream>
#include <string>
using namespace std;

class Building
{
	//全局函数为Building类的友元函数，说明该全局函数可以访问该类下的所有属性（公有、私有、保护的）
	friend void goodgay(Building* building);
public:
	Building(string sr,string br) 
		:m_SittingRoom(sr), m_BedRoom(br)
	{ }
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

void goodgay(Building* building)
{
	cout << "全局函数访问：" << building->m_SittingRoom << endl;

	cout << "全局函数访问：" << building->m_BedRoom << endl;
}
//int main()
//{
//	Building b("客厅","卧室");
//	goodgay(&b);
//}