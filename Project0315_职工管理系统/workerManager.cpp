#include"workerManager.h"

workerManager::workerManager()
{
	//��ʼ��ϵͳ
	//1���ļ�������
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;

		//��ʼ��Ա������
		this->m_emperNum = 0;

		//��ʼ��Ա������
		this->pp_wk = NULL;

		//�ļ�������
		this->isempFileEmpty = true;

		ifs.close();
		return;
	}

	//2���ļ�Ϊ��
	char ch;
	ifs >> ch;       //����һ���ַ������Ƿ����ļ�ĩβ
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;

		//��ʼ��Ա������
		this->m_emperNum = 0;

		//��ʼ��Ա������
		this->pp_wk = NULL;

		//�ļ�������
		this->isempFileEmpty = true;

		ifs.close();
		return;
	}

	//3���ļ���Ϊ�գ�����
	//3.1��ȡְ������ 
	int num = 0;
	num = this->Get_EmpNum();
	cout << "�ļ����ڣ�ְ������Ϊ�� " << num << endl;
	this->m_emperNum = num;

	//3.2��ʼ��ְ����Ϣ
	//3.2.1�ȿ���һ���ڴ�
	this->pp_wk = new Worker* [this->m_emperNum];

	//3.2.2����ְ����Ϣ
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
	cout << "******** ��ӭʹ��ְ������ϵͳ��*********" << endl;
	cout << "************ 0.�˳�������� ************" << endl;
	cout << "************ 1.����ְ����Ϣ ************" << endl;
	cout << "************ 2.��ʾְ����Ϣ ************" << endl;
	cout << "************ 3.ɾ����ְְ�� ************" << endl;
	cout << "************ 4.�޸�ְ����Ϣ ************" << endl;
	cout << "************ 5.����ְ����Ϣ ************" << endl;
	cout << "************ 6.���ձ������ ************" << endl;
	cout << "************ 7.��������ĵ� ************" << endl;
	cout << "****************************************" << endl;
}

void workerManager::ExitSystem()
{
	cout << "�����˳�����ӭ�´�ʹ��..." << endl;
	system("pause");
	exit(0);
}

void workerManager::Add_Emper()	  //���ְ��
{

	int addNum = 0;
	cout << "������Ҫ���ְ���ĸ�����";
	cin >> addNum;
	if (addNum > 0)
	{
		//�����¿ռ�ĸ���
		int newSize = this->m_emperNum + addNum;

		//����һ���¿ռ���ְ����Ϣ
		//�൱����һ�����飬������(ָ�������)Ϊnew_pp_wk
		//�����СΪ newSize
		//����Ԫ��Ϊ Worker* 
		//������new_pp_wk Ϊ������׵�ַ��Worker*��ָ�룩
		Worker** new_pp_wk = new Worker * [newSize];

		//����ԭ��ְ����Ϣ
		if (this->pp_wk != NULL)
		{
			for (int i = 0; i < this->m_emperNum; i++)
			{
				new_pp_wk[i] = this->pp_wk[i];
			}
		}

		//�����ְ��
		int id = 0;
		string name = "";
		int dId = 0;
		Worker* new_p_wk = NULL;

		for (int i = 0; i < addNum; i++)
		{
			cout << "������� " << i + 1 << " ��ְ���ı�ţ�" << endl;
			cin >> id;
			cout << "������� " << i + 1 << " ��ְ����������" << endl;
			cin >> name;
			cout << "������� " << i + 1 << " ��ְ����ְ���ţ�" << endl;
			cout << "1����ͨԱ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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

		//ɾ���ɵ��ڴ�ռ䣬�����¿ռ�����ְ����Ϣ
		delete[] this->pp_wk;

		//����ְ����Ϣ
		this->pp_wk = new_pp_wk;

		//����ְ������
		this->m_emperNum = newSize;

		//�����ļ�״̬
		this->isempFileEmpty = true;

		//�����ļ�
		this->save();

		cout << "��ӳɹ���" << "����� " << addNum << " ��Ա��.." << endl;
	}
	else
	{
		cout << "��������" << endl;
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
	
	//���Դ���
	for (int i = 0; i < this->m_emperNum; i++)
	{
		this->pp_wk[i]->showInfo();
	}
}