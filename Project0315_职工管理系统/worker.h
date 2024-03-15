#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	//显示个人信息
	virtual void showInfo() = 0;

	//获取岗位名称
	virtual string getWorkType() = 0;

	int get_ID() const { return m_Id; }
	string get_Name() const { return m_Name; }
	int get_d_ID() const { return m_dId; }
protected:
	int m_Id;			//职工编号
	string m_Name;		//职工姓名
	int m_dId;			//部门编号
};

