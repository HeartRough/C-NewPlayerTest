#include "pch.h"
using namespace std;
//类的声明，对象的引用
class object {
public:
	int a;
	int b;
public:
	void out() {
		cout << a << "\t" << b << endl;
	}
};

int main() {
	//字符串的输入输出会有异常
	//cout << "移除了一个东东" << endl;
	/*
	cout << "Please print 20 end:";
	char str[20];
	scanf_s("%s", str);
	cout << str;
	*/
	//while和++的套路
	/*
	int n = 0;
	while (n++ <= 2);
	cout << n;
	*/
	//随机数时间种子
	/*
	srand(unsigned(time(NULL)));
	for(int i=0;i<10;i++){
		cout << 5 + rand() % 11 << "\t" << endl;
		cout << random(5, 15) << endl;
	}
	*//*
	int n = 0;
	int m = 1;
	while (n++ <= 2) {
		m++;
	}
	cout << n << endl;
	*/
	/*
	object a;
	a.a = 1;
	a.b = 2;
	a.out();
	object *b;
	b->a = 3;
	b->b = 4;
	b->out();
	*/
}


