#include <iostream>
#include <string>
using namespace std;


class Building;

class GoodGay
{
public: 
	GoodGay();
	~GoodGay()
	{
		cout << "GoodGay析构函数，指针变量指向的地址：" << m_Building << endl;
	}

	void visit(Building& building);
private:
	Building* m_Building;
};

class Building
{

public:
	Building(string sr = " ", string br = " ")
		:m_SittingRoom(sr), m_BedRoom(br)
	{ }
public:
	string m_SittingRoom;
private:
	string m_BedRoom;

	//成员函数做友元
	friend void GoodGay::visit(Building& building);

};

inline GoodGay::GoodGay()
{
	//m_Building = new Building;
}
inline void GoodGay::visit(Building& building)
{
	m_Building = new Building(building);
	cout << "正在参观该对象的：" << m_Building->m_SittingRoom << endl;
	cout << "正在参观该对象的：" << m_Building->m_BedRoom << endl;
	if (m_Building)
	{
		delete m_Building;
		m_Building = NULL;
	}
}

int main()
{
	Building b("客厅", "卧室");
	GoodGay gg;
	gg.visit(b);
	return 0;
}