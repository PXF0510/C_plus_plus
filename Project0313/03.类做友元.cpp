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

	void visit();
private:
	Building* m_Building;
};

inline GoodGay::GoodGay()
{
	m_Building = new Building("客厅","卧室");
}
inline void GoodGay::visit()
{
	cout << "正在参观该对象的：" << m_Building->m_SittingRoom << endl;
	cout << "正在参观该对象的：" << m_Building->m_BedRoom << endl;
}

//int main() 
//{
//	GoodGay gg;
//	gg.visit();
//	return 0;
//}