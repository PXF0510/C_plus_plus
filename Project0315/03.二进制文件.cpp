#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//�������ļ� д
class Person
{
public:

	char m_Name[64];          //д�ļ���ʱ�򣬾���ʹ��char�ͣ�string�Ϳ��ܻ�������
	int m_Age;
};

void test01() 
{
	Person p = { "����", 20 };

	//д�ļ�
	//1������ͷ�ļ�
	
	//2�������ļ�������
	ofstream ofs("test2.txt",ios::out|ios::binary);

	//3�����ļ�

	//4��д��
	ofs.write((const char*)&p, sizeof(Person));

	//5���ر�
	ofs.close();
	

	//���ļ�
	//1������ͷ�ļ�
	
	//2����������
	ifstream ifs;

	//3�����ļ�
	ifs.open("test2.txt", ios::in | ios::binary);
	if (! ifs.is_open())
	{
		cout << "��ʧ�ܣ�" << endl;
		return;
	}

	//4������
	Person p2;
	ifs.read((char *)&p2, sizeof(Person));
	cout << "������" << p2.m_Name << "���䣺" << p2.m_Age << endl;

	//5���ر�
	ifs.close();

}

int main()
{
	test01();
	return 0;
}