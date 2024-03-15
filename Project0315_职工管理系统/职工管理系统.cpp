#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
	workerManager wm;
	int choice = 0;

	//测试
	//Worker* p_wk = NULL;
	//p_wk = new Emplyoee(1, "张三", 3);
	//p_wk->showInfo();
	//delete p_wk;

	//p_wk = new Manager(2, "李四", 2);
	//p_wk->showInfo();
	//delete p_wk;

	//p_wk = new Boss(3, "萧枫", 1);
	//p_wk->showInfo();
	//delete p_wk;
	
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:					//退出
			wm.ExitSystem();
			break;
		case 1:					//添加职工
			wm.Add_Emper();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			system("cls");
			break;
		}
	}
	return 0;
}