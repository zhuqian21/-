#include <iostream>
using namespace std;

//常量的定义方式
//、#define 宏常量
//、const修饰的变量
#define Day 7

int main()
{
	// Day = 7; //错误，Day是常量，一旦修改就会报错
	//cout << "一周总共有：" << Day << "天"<<endl;
	//const int month = 12;
	//month = 24; 
	//cout << "一年有：" << month << "个月份" << endl;

	//创建变量：数据类型 变量名 = 变量初始值
	int a = 10;
	cout << "short占用的内存空间：" << sizeof(short) << endl;
	cout << "int占用的内存空间：" << sizeof(int) << endl;
	cout << "long占用的内存空间：" << sizeof(long) << endl;
	cout << "long long占用的内存空间：" << sizeof(long long) << endl;


	//cout << "hello C++" << endl;

	system("pause");
	return 0;
}