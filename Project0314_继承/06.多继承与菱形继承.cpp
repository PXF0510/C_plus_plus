#include <iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};

//��̳�
class Sheep :virtual public Animal
{
};

//��̳�
class Camp :virtual public Animal
{

};

//���μ̳�
class SheepCamp :public Sheep, public Camp
{

};

void test()
{
	SheepCamp s;
	s.Sheep::m_Age = 18;//SheepCamp ����1 Sheep �̳���һ��Animal��������� m_Age
	s.Camp::m_Age = 28; //SheepCamp ����2 Camp Ҳ�̳���һ��Animal��������� m_Age

	//cout << "s �����䣺" << s.m_Age << endl;  //���ʳ�ͻ���ü�����������
	cout << "s �� Sheep ������䣺" << s.Sheep::m_Age << endl;
	cout << "s �� Camp ������䣺" << s.Camp::m_Age << endl;

	//����virtual�ؼ��֣���Sheep��Camp��Ϊ��̳У���֤����m_Ageֻ��һ�� 
	//Sheep ��̳е��� ���� Animal��һ�������ָ�룬ָ�����Sheep������
	//Camp ��̳е��� ���� Animal��һ�������ָ�룬ָ�����Camp������
	//���д�ŵ��Ƿ������� m_Age �ĵ�ַƫ�ƣ���֤m_Age����ֻ��һ�ݣ������Է��ʵ�
	cout << "s �����䣺" << s.m_Age << endl; 
	cout << "s �� Sheep ������䣺" << s.Sheep::m_Age << endl;
	cout << "s �� Camp ������䣺" << s.Camp::m_Age << endl;
}

int main()
{
	test();
	return 0;
}