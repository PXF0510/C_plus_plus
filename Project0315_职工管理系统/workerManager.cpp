#include"workerManager.h"

workerManager::workerManager()
{
	//初始化系统
	//1、文件不存在
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;

		//初始化员工个数
		this->m_emperNum = 0;

		//初始化员工数组
		this->pp_wk = NULL;

		//文件不存在
		this->isempFileEmpty = true;

		ifs.close();
		return;
	}

	//2、文件为空
	char ch;
	ifs >> ch;       //读入一个字符，看是否是文件末尾
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;

		//初始化员工个数
		this->m_emperNum = 0;

		//初始化员工数组
		this->pp_wk = NULL;

		//文件不存在
		this->isempFileEmpty = true;

		ifs.close();
		return;
	}

	//3、文件不为空，读入
	//3.1获取职工个数 
	int num = 0;
	num = this->Get_EmpNum();
	cout << "文件存在，职工个数为： " << num << endl;
	this->m_emperNum = num;

	//3.2初始化职工信息
	//3.2.1先开辟一块内存
	this->pp_wk = new Worker* [this->m_emperNum];

	//3.2.2读入职工信息
	this->initEpmer();
}

workerManager::~workerManager()
{
	if (this->pp_wk)
	{
		delete[] this->pp_wk;
		this->pp_wk = NULL;
	}
}

void workerManager::Show_Menu()
{
	cout << "****************************************" << endl;
	cout << "******** 欢迎使用职工管理系统！*********" << endl;
	cout << "************ 0.退出管理程序 ************" << endl;
	cout << "************ 1.增加职工信息 ************" << endl;
	cout << "************ 2.显示职工信息 ************" << endl;
	cout << "************ 3.删除离职职工 ************" << endl;
	cout << "************ 4.修改职工信息 ************" << endl;
	cout << "************ 5.查找职工信息 ************" << endl;
	cout << "************ 6.按照编号排序 ************" << endl;
	cout << "************ 7.清空所有文档 ************" << endl;
	cout << "****************************************" << endl;
}

void workerManager::ExitSystem()
{
	cout << "即将退出，欢迎下次使用..." << endl;
	system("pause");
	exit(0);
}

void workerManager::Add_Emper()	  //添加职工
{

	int addNum = 0;
	cout << "请输入要添加职工的个数：";
	cin >> addNum;
	if (addNum > 0)
	{
		//计算新空间的个数
		int newSize = this->m_emperNum + addNum;

		//开辟一块新空间存放职工信息
		//相当于是一个数组，数组名(指针变量名)为new_pp_wk
		//数组大小为 newSize
		//数组元素为 Worker* 
		//数组名new_pp_wk 为数组的首地址（Worker*的指针）
		Worker** new_pp_wk = new Worker * [newSize];

		//保留原有职工信息
		if (this->pp_wk != NULL)
		{
			for (int i = 0; i < this->m_emperNum; i++)
			{
				new_pp_wk[i] = this->pp_wk[i];
			}
		}

		//添加新职工
		int id = 0;
		string name = "";
		int dId = 0;
		Worker* new_p_wk = NULL;

		for (int i = 0; i < addNum; i++)
		{
			cout << "请输入第 " << i + 1 << " 个职工的编号：" << endl;
			cin >> id;
			cout << "请输入第 " << i + 1 << " 个职工的姓名：" << endl;
			cin >> name;
			cout << "请输入第 " << i + 1 << " 个职工的职务编号：" << endl;
			cout << "1、普通员工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dId;
			switch (dId)
			{
			case 1:
				new_p_wk = new Emplyoee(id, name, dId);
				break;
			case 2:
				new_p_wk = new Manager(id, name, dId);
				break;
			case 3:
				new_p_wk = new Boss(id, name, dId);
				break;
			default:
				break;
			}
			new_pp_wk[this->m_emperNum + i] = new_p_wk;
		}

		//删除旧的内存空间，开辟新空间存放新职工信息
		delete[] this->pp_wk;

		//更新职工信息
		this->pp_wk = new_pp_wk;

		//更新职工个数
		this->m_emperNum = newSize;

		//更新文件状态
		this->isempFileEmpty = true;

		//保存文件
		this->save();

		cout << "添加成功！" << "添加了 " << addNum << " 名员工.." << endl;
	}
	else
	{
		cout << "输入有误！" << endl;
	}

	system("pause");
	system("cls");
}

void workerManager::save()
{
	ofstream ofs;

	ofs.open(FILENAME, ios::out);

	for (int i = 0; i < this->m_emperNum; i++)
	{
		ofs << this->pp_wk[i]->get_ID() << " ";
		ofs << this->pp_wk[i]->get_Name() << " ";
		ofs << this->pp_wk[i]->get_d_ID() << endl;
	}

	ofs.close();
}

int workerManager::Get_EmpNum()
{
	int id;
	string name;
	int dId;
	int num = 0;
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	while ((ifs >> id)&&(ifs >> name)&&(ifs >> dId))
	{
		num++;
	}

	return num;
}

void workerManager::initEpmer()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	int id;
	string name;
	int dId;

	int index = 0;
	Worker* p_wk = NULL;

	while ((ifs >> id)&&(ifs >> name)&&(ifs >> dId))
	{
		switch (dId)
		{
		case 1:
			p_wk = new Emplyoee(id, name, dId);
			break;
		case 2:
			p_wk = new Manager(id, name, dId);
			break;
		case 3:
			p_wk = new Boss(id, name, dId);
			break;
		default:
			break;
		}

		this->pp_wk[index] = p_wk;
		index++;
	}

	ifs.close();
	
	//测试代码
	for (int i = 0; i < this->m_emperNum; i++)
	{
		this->pp_wk[i]->showInfo();
	}
}