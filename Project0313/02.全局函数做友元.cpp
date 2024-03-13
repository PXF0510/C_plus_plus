#include <iostream>
#include <string>
using namespace std;

class Building
{
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