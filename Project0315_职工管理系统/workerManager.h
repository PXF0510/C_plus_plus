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
	void Show_Menu(); //显示菜单
	void ExitSystem();//退出系统
	void Add_Emper(); //添加职工
	void save();      //保存到文件
	int Get_EmpNum(); //获取职工个数 
	void initEpmer(); //初始化

private:
	int m_emperNum;   //员工个数
	Worker** pp_wk;   //存放员工信息的数组，n 个 Worker*
	bool isempFileEmpty;
};

