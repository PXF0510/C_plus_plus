//#include <iostream>
//#include <string>
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯��" << endl;
//	}
//	//����������
//	//ͨ������ָ���ͷ�������󣬱�֤�����е���������Ҳ�ܱ�����
//	//���������û�ж������ݣ�����������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������" << endl;
//	//}
//	//������������
//	virtual ~Animal() = 0;
//
//	virtual void speak() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal������������" << endl;
//}
//
//class Cat:public Animal
//{
//public:
//	Cat(const string& name)
//		:m_Name(new string(name))
//	{
//		cout << "Cat���캯��" << endl;
//	}
//
//	void speak() 
//	{
//		cout << *m_Name <<"Cat��˵��" << endl;
//	}
//
//	//�������ͷ��ڴ�
//	~Cat() 
//	{
//		cout << "Cat��������" << endl;
//		if (m_Name)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//private:
//	string* m_Name;
//};
//
//void doSpeak(Animal* ani)
//{
//	ani->speak();
//	//ɾ������Animal��ָ�룬�ͷ��ڴ棬�����Animal����������
//	//�������������Cat��������������������ж�̬���ٵ��ڴ治�ᱻ�ͷ�
//	//Ҫ���������������������������е�������������Ϊ����������������������
//	delete ani;            
//}
//
//void test()
//{
//	//Cat c("Tom");                //ʵ������һ��Cat����c,����һ�ι��캯��������
//	//Animal* c_p = new Cat("Tom");  //new һ�����󣬿���һ���ڴ棬��delete�ͷź󣬲Ż������������
//	//delete c_p;
//	doSpeak(new Cat("Tom"));
//}
//
//int main() 
//{
//	test();
//	return 0;
//}