#include<iostream>
#include<string>
using namespace std;


//��������������ض���
class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};


//��������
void MyPrint02(string test)
{
	cout << test << endl;
}

//�ӷ���
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

	p1("hello,world");//ʹ�������ǳ����ƺ����ĵ��ã���˳�Ϊ�º���

	MyPrint02("hello,world");//��������
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