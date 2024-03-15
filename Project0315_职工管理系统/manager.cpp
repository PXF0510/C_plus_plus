#include"manager.h"

Manager::Manager(int id, string name, int dId)
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_dId = dId;
}

//显示个人信息
void Manager::showInfo()
{
	cout << "职位编号：" << this->m_Id;
	cout << "\t姓名：" << this->m_Name;
	cout << "\t部门编号：" << this->m_dId;
	cout << "\t职位：" << this->getWorkType() << ",负责管听话的员工" << endl;

}

//获取岗位名称
string Manager::getWorkType()
{
	return string("经理");
}