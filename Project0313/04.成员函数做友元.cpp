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
		cout << "GoodGay����������ָ�����ָ��ĵ�ַ��" << m_Building << endl;
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

	//��Ա��������Ԫ
	friend void GoodGay::visit(Building& building);

};

inline GoodGay::GoodGay()
{
	//m_Building = new Building;
}
inline void GoodGay::visit(Building& building)
{
	m_Building = new Building(building);
	cout << "���ڲι۸ö���ģ�" << m_Building->m_SittingRoom << endl;
	cout << "���ڲι۸ö���ģ�" << m_Building->m_BedRoom << endl;
	if (m_Building)
	{
		delete m_Building;
		m_Building = NULL;
	}
}

int main()
{
	Building b("����", "����");
	GoodGay gg;
	gg.visit(b);
	return 0;
}