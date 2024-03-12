#include "myvar.h"

extern const int var_const_1 = 5;


int main() 
{
	//std::cout << var_const_1 << std::endl;
	//_cout();

	//常值引用
	double a = 15.3;
	const int& b = a;

	//一维数组
	//int arr[5] = { 1,2,3,4,5 }; //int型数组
	//cout << sizeof(arr)<<endl; //int型数组所占内存大小，字节
	//cout << sizeof(arr[0])<<endl;
	//cout << sizeof(arr) / sizeof(arr[0]) << endl;

	//cout << arr << endl;

	//二维数组
	int arr1[2][3];
	arr1[0][0] = 1;

	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	int arr3[2][3] = { 1,2,3,4,5,6 };

	int arr4[][3] = { 1,2,3,4,5,6 };

	//***************指针 4字节或8字节******************
	//1.空指针，初始化使用，但是不可以访问
	/*int* p = NULL;*/

	//2.野指针，没有分配内存，却直接访问，错误
	/*int* p = (int*)0x1100;*/
	
	//3.const 修饰指针
	//1)、指向常量的指针，指针指向一个常量，不能通过该指针改变所指对象的值
	//指针指向的对象的值不可变，但是指针的指向可以改变；
	const int c = 5;           //常量为c
	const int* p = &c;         //指针p指向常量c，即不能通过指针p修改c的值
	int d = 12;                //变量d
	p = &d;                    //此时指针p由指向常量c变为指向变量d，指针的内容为变量d的值12
							   //此时，不能通过指针修改变量d的值
							   
	//常量指针（即指针本身是一个常量）
	int errNum = 0;                     //变量errNum
	int* const p_errNum = &errNum;      //指向变量errNum的指针，其是一个常量，即：该指针只能指向变量errNum
	*p_errNum = 10;                     //可以通过指针修改变量errNum的值

	//既修饰指针、又修饰常量
	const int var_const = 10;                     //定义一个常量var_const,值不能修改
	const int* const p_var_const = &var_const;    //指向该常量的一个常指针，即：该指针只能指向该常量var_const，且不能通过该指针改变var_const的值
	//****************指针-END******************
	
	//*********指针&数组**************
	double arr_d[10] = { 1,2,3,4,5 };
	double* p_arr_d = arr_d;
	cout << *p_arr_d << endl;
	//*********指针&数组-END**************

	//*********结构体**********
	struct Student s1;
	s1.name = "例子";
	struct Student s2 = {"张三",20,100.5};

	//结构体数组
	struct Student s[3];
	s[0].name = "李四";

	//结构体指针
	struct Student* p_s = &s[0];
	p_s->name;
	///********结构体-END**********

	//函数的占位参数
	/*func();*/

	//函数重载
	int errNum2 = 10;
	const int errNum3 = 10;
	func(errNum2);
	func(errNum3);
	func(10);

	system("pause");
	return 0;
}