//#include <iostream>
//#include <string>
//
////1������ͷ�ļ�
//#include <fstream>
//using namespace std;
//
//void test01()
//{
//	//***************  д�ļ�  ***************
//	//1������ͷ�ļ�
//	
//	//2������������
//	//д����
//	ofstream ofs;
//
//	//��������
//	ifstream ifs;
//
//	//��д����
//	fstream fs;
//
//	//3��ָ���򿪷�ʽ
//	ofs.open("test.txt",ios::out);
//
//	//4��д����
//	ofs << "������" << "����" << endl;
//	ofs << "ѧ�ţ�" << "22204052" << endl;
//
//	//5���ر�
//	ofs.close();
//
//	//***************  ���ļ�  ***************
//	//���ļ�
//	ifs.open("test.txt", ios::in);
//	if (! ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//������
//	//��һ��
//	//char buff[1024] = { 0 };
//	//while (ifs >> buff)
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//�ڶ���
//	//char buff[1024] = { 0 };
//	//while (ifs.getline(buff, sizeof(buff)))  //��һ��
//	//{
//	//	cout << buff << endl;
//	//}
//
//	//������
//	//string s;
//	//while (getline(ifs, s))
//	//{
//	//	cout << s << endl;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)         //��һ��
//	{
//		cout << c;
//	}
//	//�ر�
//	ifs.close();
//
//}
//int main()
//{
//	test01();
//	return 0;
//}