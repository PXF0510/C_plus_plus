//#include <iostream>
//#include <string>
//
////1、包含头文件
//#include <fstream>
//using namespace std;
//
//void test01()
//{
//	//***************  写文件  ***************
//	//1、包含头文件
//	
//	//2、创建流对象
//	//写操作
//	ofstream ofs;
//
//	//读操作、
//	ifstream ifs;
//
//	//读写操作
//	fstream fs;
//
//	//3、指定打开方式
//	ofs.open("test.txt",ios::out);
//
//	//4、写内容
//	ofs << "姓名：" << "张三" << endl;
//	ofs << "学号：" << "22204052" << endl;
//
//	//5、关闭
//	ofs.close();
//
//	//***************  读文件  ***************
//	//打开文件
//	ifs.open("test.txt", ios::in);
//	if (! ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//读数据
//	//第一种
//	//char buff[1024] = { 0 };
//	//while (ifs >> buff)
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//第二种
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buff, sizeof(buff)))  //读一行
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//第三种
//	//string s;
//	//while (getline(ifs, s))
//	//{
//	//	cout << s << endl;
//	//}
//
//	//第四种
//	char c;
//	while ((c = ifs.get()) != EOF)         //读一个
//	{
//		cout << c;
//	}
//	//关闭
//	ifs.close();
//
//}
//int main()
//{
//	test01();
//	return 0;
//}