#include <iostream>
#include <string>
using namespace std;

class Building
{
	friend class GoodGay;
public:
	Building(string sr = " ", string br = " ")
		:m_SittingRoom(sr), m_BedRoom(br)
	{ }
public:
	string m_SittingRoom;
private:
	string m_BedRoom;

};

class GoodGay
{
public:
	GoodGay();
	~GoodGay() {delete m_Building;}

	void visit(Building& building);
private:
	Building* m_Building;
};

inline GoodGay::GoodGay()
{
	m_Building = new Building;
}
inline void GoodGay::visit(Building& building)
{
	m_Building = &building;
	cout << "���ڲι۸ö���ģ�" << m_Building->m_SittingRoom << endl;
	cout << "���ڲι۸ö���ģ�" << m_Building->m_BedRoom << endl;
}

//int main() 
//{
//	Building b("����", "����");
//	GoodGay gg;
//	gg.visit(b);
//	return 0;
//}