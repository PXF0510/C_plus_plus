#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//二进制文件 写
class Person
{
public:

	char m_Name[64];          //写文件的时候，尽量使用char型，string型可能会有问题
	int m_Age;
};

void test01() 
{
	Person p = { "张三", 20 };

	//写文件
	//1、包含头文件
	
	//2、创建文件流对象
	ofstream ofs("test2.txt",ios::out|ios::binary);

	//3、打开文件

	//4、写入
	ofs.write((const char*)&p, sizeof(Person));

	//5、关闭
	ofs.close();
	

	//读文件
	//1、包含头文件
	
	//2、创建对象
	ifstream ifs;

	//3、打开文件
	ifs.open("test2.txt", ios::in | ios::binary);
	if (! ifs.is_open())
	{
		cout << "打开失败！" << endl;
		return;
	}

	//4、读入
	Person p2;
	ifs.read((char *)&p2, sizeof(Person));
	cout << "姓名：" << p2.m_Name << "年龄：" << p2.m_Age << endl;

	//5、关闭
	ifs.close();

}

int main()
{
	test01();
	return 0;
}