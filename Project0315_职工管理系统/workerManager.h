#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#define FILENAME "empFile.txt"

using namespace std;
class workerManager
{
public:
	workerManager();
	~workerManager();
	void Show_Menu(); //��ʾ�˵�
	void ExitSystem();//�˳�ϵͳ
	void Add_Emper(); //���ְ��
	void save();      //���浽�ļ�
	int Get_EmpNum(); //��ȡְ������ 
	void initEpmer(); //��ʼ��

private:
	int m_emperNum;   //Ա������
	Worker** pp_wk;   //���Ա����Ϣ�����飬n �� Worker*
	bool isempFileEmpty;
};

