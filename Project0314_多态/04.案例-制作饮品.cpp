//#include <iostream>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//�뱭
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	//����
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "�󿧷�ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "�忧��" << endl;
//	}
//
//	//�뱭
//	virtual void PourInCup()
//	{
//		cout << "�뱭" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "���̡���" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��kaungquanˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "��Tea" << endl;
//	}
//
//	//�뱭
//	virtual void PourInCup()
//	{
//		cout << "�뱭" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "��Lemon" << endl;
//	}
//};
//
//void domakeDrink(AbstractDrinking* abs)
//{
//	abs->makeDrink();
//	if (abs)
//	{
//		delete abs;
//		abs = NULL;
//	}
//}
//void test()
//{
//	domakeDrink(new Coffee);
//	cout << "----------" << endl;
//	domakeDrink(new Tea);
//}
//int main()
//{
//	test();
//	return 0;
//}