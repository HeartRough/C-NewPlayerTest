// ConsoleApplication3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include "pch.h"
int main()
{
	/*
	cout << "Please input your grilfriend's name:";
	char name[50];
	cin >> name;
	cout << name << " is your grilfriend" << endl;
	cout << left;                                    //对齐方式
	cout << setfill('_');                            //用_填充，仅仅能单引号，不能双引号
	cout << setw(10) << "Hello World!" << setw(20) << "Let's go" << "\n";
	//boolalpha是头文件#include <iostream>中的一个函数，是把bool a = 1；变量打印出false或者true的函数：
	cout << (250 > 100) << "\t" << (222 < 111);
	cout << boolalpha;
	cout << (250>100) << "\t" << (222 < 111);
	*/
	/*
	int a=-5;
	cout << "a=-5" << endl;
	cout << a / 2<<endl;
	cout << a % 2 << endl;
	cout << a / (-2) << endl;
	cout << a % (-2) << endl;
	cout << a++ << "\t" << a;
	*/
	/*
	int a = 5;
	double b = a/2.00;
	cout << b<<endl;
	double c=(double)a/2.0;
	cout << c << endl;
	double d=5.00/2;
	cout << d;
	*/
	/*for循环
	int num=0;
	for (int i = 0; i < 10; i++) {
		num += i;
		if (i == 9) {
			cout << "num=" << num << endl;
		}
	}
	*/
	/*while,swithch
	int i = 1;
	while (i ) {
		cout << i << endl;
		i++;
		if (i == 10) { break; }
	}
	do {
		cout << i << endl;
		i++;
		if (i == 20)break;
	} while (i);
	switch (i) {
	case 19:
		cout << "i=" << i << endl;
		break;
	case 20:
		cout << "i=" << i << endl;
		break;
	case 21:
		cout << "i=" << i << endl;
		break;
	}
	*/
	/*
#define len 20
	int a[len];
	cout << length(a)<<endl;
	cout << sizeof(a)<<endl;
	//cout<< sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		a[i] = i;
	}
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		cout << a[i] << endl;
	}
	*/
	//cout << "hello,dear!" << endl;
	//cout<<"Hello world."<<endl;
	/*
	//指针与数组
	int *ip;
	int num[20];
	
	for (int i = 0; i < length(num); i++) {
		num[i] = i+1;
	}
	ip = &num[0];
	for (int i = 0; i < length(num); i++) {
		cout << *ip << endl;
		ip++;
	}
#define MAX 3
	int  var[MAX] = { 10, 100, 200 };
	int  *ptr;

	// 指针中最后一个元素的地址
	ptr = &var[MAX - 1];
	for (int i = MAX; i > 0; i--)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;

		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;

		// 移动到下一个位置
		ptr--;
	}
	*/
	//double var;
	//cout << &var << endl;
	cout << "It's interesting !" << endl;	

}
class object {
public:

};



// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
