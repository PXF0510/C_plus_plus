//#include <iostream>
//using namespace std;
//
//class Animal
//{
//public:
//	//�麯��
//	//��Animal���ڲ�����һ���麯��ָ�룬ָ���麯�������д���麯������ڵ�ַ
//	virtual void speak() 
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Cat��˵��" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "Dog��˵��" << endl;
//	}
//};
//
////��ַ��� �ڱ���׶�ȷ����������ڵ�ַ
////��virtual�ؼ������θ���ĺ���ʱ������ʵ�ֵ�ַ���
//
////��̬��̬��������
////1���м̳й�ϵ
////2��������д������麯������
//
////��̬��̬��ʹ��
////�����ָ������� ִ���Ӷ���
//
////�ᳫʹ�ö�̬���п���
////1��������֯�ṹ�������ɶ���ǿ
////2������ǰ�ں��ڵ���չ��ά��
//
//void doSpeak(Animal& animal)
//{
//	//���������ָ������Ķ���
//	animal.speak();
//}
//void test()
//{
//	Cat c;
//	doSpeak(c);
//}
//int main() 
//{
//	test();
//	return 0;
//}