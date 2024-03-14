//#include <iostream>
//using namespace std;
//
//class SBase2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;   
//};
//
//class Son4 :public SBase2
//{
//public:
//	int m_Data;
//};
////
//void test() 
//{
//	Son4 s;
//	//16
//	//父类中的非静态成员属性都会被子类继承
//	//父类中的私有成员属性被编译器隐藏，子类访问不到
//	cout << "Size of s:" << sizeof(s) << endl;
// 
//  //可利用VS开发者工具查看类的对象模型
//}
////int main()
////{
////	test();
////	return 0;
////}