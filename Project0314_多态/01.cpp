#include <iostream>
#include <string>
using namespace std;

int main() 
{
	//string 类型定义的str为字符串变量str，整个变量的值为"Hello"
	//p_str 是变量str的指针，指向的就是这个变量所在内存空间，
	//指针的内容就是"Hello"
	string str = "Hello";
	cout << "字符串1为：" << str << endl;
	string* p_str = &str;
	cout << "字符串1为：" << *p_str << endl;

	//s[] 为char型的数组，s是数组名，是这个数组的首地址
	//给cout一个数组的首地址，它可以输出这个数组存放的内容；
	//p_s 是一个指针，初始时指向的是数组s[]的首地址；
	//给cout这个数组的首地址，即指针p_s,可以输出这个数组的内容
	//给指针解引用，只能输出该指针指向的内容，"w"
	char s[] = "World";
	char s2[] = "{1,2,3,4}";
	cout << "字符串2为：" << s << endl;
	char* p_s = s2;
	cout << "字符串2为：" << p_s << endl;

	return 0;
}