#include "myvar.h"

extern const int var_const_1 = 5;


int main() 
{
	//std::cout << var_const_1 << std::endl;
	//_cout();

	//��ֵ����
	double a = 15.3;
	const int& b = a;

	//һά����
	//int arr[5] = { 1,2,3,4,5 }; //int������
	//cout << sizeof(arr)<<endl; //int��������ռ�ڴ��С���ֽ�
	//cout << sizeof(arr[0])<<endl;
	//cout << sizeof(arr) / sizeof(arr[0]) << endl;

	//cout << arr << endl;

	//��ά����
	int arr1[2][3];
	arr1[0][0] = 1;

	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};

	int arr3[2][3] = { 1,2,3,4,5,6 };

	int arr4[][3] = { 1,2,3,4,5,6 };

	//***************ָ�� 4�ֽڻ�8�ֽ�******************
	//1.��ָ�룬��ʼ��ʹ�ã����ǲ����Է���
	/*int* p = NULL;*/

	//2.Ұָ�룬û�з����ڴ棬ȴֱ�ӷ��ʣ�����
	/*int* p = (int*)0x1100;*/
	
	//3.const ����ָ��
	//1)��ָ������ָ�룬ָ��ָ��һ������������ͨ����ָ��ı���ָ�����ֵ
	//ָ��ָ��Ķ����ֵ���ɱ䣬����ָ���ָ����Ըı䣻
	const int c = 5;           //����Ϊc
	const int* p = &c;         //ָ��pָ����c��������ͨ��ָ��p�޸�c��ֵ
	int d = 12;                //����d
	p = &d;                    //��ʱָ��p��ָ����c��Ϊָ�����d��ָ�������Ϊ����d��ֵ12
							   //��ʱ������ͨ��ָ���޸ı���d��ֵ
							   
	//����ָ�루��ָ�뱾����һ��������
	int errNum = 0;                     //����errNum
	int* const p_errNum = &errNum;      //ָ�����errNum��ָ�룬����һ��������������ָ��ֻ��ָ�����errNum
	*p_errNum = 10;                     //����ͨ��ָ���޸ı���errNum��ֵ

	//������ָ�롢�����γ���
	const int var_const = 10;                     //����һ������var_const,ֵ�����޸�
	const int* const p_var_const = &var_const;    //ָ��ó�����һ����ָ�룬������ָ��ֻ��ָ��ó���var_const���Ҳ���ͨ����ָ��ı�var_const��ֵ
	//****************ָ��-END******************
	
	//*********ָ��&����**************
	double arr_d[10] = { 1,2,3,4,5 };
	double* p_arr_d = arr_d;
	cout << *p_arr_d << endl;
	//*********ָ��&����-END**************

	//*********�ṹ��**********
	struct Student s1;
	s1.name = "����";
	struct Student s2 = {"����",20,100.5};

	//�ṹ������
	struct Student s[3];
	s[0].name = "����";

	//�ṹ��ָ��
	struct Student* p_s = &s[0];
	p_s->name;
	///********�ṹ��-END**********

	//������ռλ����
	/*func();*/

	//��������
	int errNum2 = 10;
	const int errNum3 = 10;
	func(errNum2);
	func(errNum3);
	func(10);

	system("pause");
	return 0;
}