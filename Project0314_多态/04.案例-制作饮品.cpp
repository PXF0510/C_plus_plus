//#include <iostream>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//入杯
//	virtual void PourInCup() = 0;
//
//	//加入辅料
//	virtual void PutSomething() = 0;
//
//	//制作
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
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮咖啡水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲咖啡" << endl;
//	}
//
//	//入杯
//	virtual void PourInCup()
//	{
//		cout << "入杯" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加奶、糖" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil()
//	{
//		cout << "煮kaungquan水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲Tea" << endl;
//	}
//
//	//入杯
//	virtual void PourInCup()
//	{
//		cout << "入杯" << endl;
//	}
//
//	//加入辅料
//	virtual void PutSomething()
//	{
//		cout << "加Lemon" << endl;
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