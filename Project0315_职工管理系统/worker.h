#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getWorkType() = 0;

	int get_ID() const { return m_Id; }
	string get_Name() const { return m_Name; }
	int get_d_ID() const { return m_dId; }
protected:
	int m_Id;			//ְ�����
	string m_Name;		//ְ������
	int m_dId;			//���ű��
};

