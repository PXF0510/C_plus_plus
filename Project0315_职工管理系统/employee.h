#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Emplyoee :public Worker
{
public:
	Emplyoee(int id, string name, int dId);

	//��ʾ������Ϣ
	void showInfo();

	//��ȡ��λ����
	string getWorkType();
};