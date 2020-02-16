#include<iostream>
#include<string>
using namespace std;


//函数调用运算符重定义
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};


//函数调用
void MyPrint02(string test)
{
	cout << test << endl;
}

//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test01()
{
	MyPrint p1;

	p1("hello,world");//使用起来非常类似函数的调用，因此成为仿函数

	MyPrint02("hello,world");//函数调用
}

void test02()
{
	MyAdd p1;
	int ret = p1(100, 100);
	cout << "ret = " << ret << endl;
}
int main()
{
	//test01();
	test02();
	return 1;
}