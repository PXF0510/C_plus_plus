#include <iostream>
#include <string>
using namespace std;

int main() 
{
	//string ���Ͷ����strΪ�ַ�������str������������ֵΪ"Hello"
	//p_str �Ǳ���str��ָ�룬ָ��ľ���������������ڴ�ռ䣬
	//ָ������ݾ���"Hello"
	string str = "Hello";
	cout << "�ַ���1Ϊ��" << str << endl;
	string* p_str = &str;
	cout << "�ַ���1Ϊ��" << *p_str << endl;

	//s[] Ϊchar�͵����飬s���������������������׵�ַ
	//��coutһ��������׵�ַ�������������������ŵ����ݣ�
	//p_s ��һ��ָ�룬��ʼʱָ���������s[]���׵�ַ��
	//��cout���������׵�ַ����ָ��p_s,�������������������
	//��ָ������ã�ֻ�������ָ��ָ������ݣ�"w"
	char s[] = "World";
	char s2[] = "{1,2,3,4}";
	cout << "�ַ���2Ϊ��" << s << endl;
	char* p_s = s2;
	cout << "�ַ���2Ϊ��" << p_s << endl;

	return 0;
}