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
	cout << "ȫ�ֺ������ʣ�" << building->m_SittingRoom << endl;

	cout << "ȫ�ֺ������ʣ�" << building->m_BedRoom << endl;
}
//int main()
//{
//	Building b("����","����");
//	goodgay(&b);
//}