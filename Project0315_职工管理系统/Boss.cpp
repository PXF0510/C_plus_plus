#include"boss.h"

Boss::Boss(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_dId = dId;
}

//��ʾ������Ϣ
void Boss::showInfo()
{
	cout << "ְλ��ţ�" << this->m_Id;
	cout << "\t������" << this->m_Name;
	cout << "\t���ű�ţ�" << this->m_dId;
	cout << "\tְλ��" << this->getWorkType() << ",�����ְ�" << endl;

}

//��ȡ��λ����
string Boss::getWorkType()
{
	return string("�ϰ�");
}