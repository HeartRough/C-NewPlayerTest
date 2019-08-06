#include "pch.h"


//class A
//{
//	int i;
//	union U
//	{
//		char buff[13];
//		int i;
//	}u;
//	void foo() {    }
//	typedef char* (*f)(void*);
//	enum { red, green, blue } color;
//}a;
//int main() {
//	cout << sizeof(a);
//	//TODO_为什么是24
//}

int main() {
	
	/*int x, y;
	scanf_s("x=%d,y=%d", &x, &y);
	printf_s("x+y=%d", x + y);*/

	/*int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, *p = a;
	cout << *p<<endl;
	cout << *a<<endl;
	cout << a[p - a];//输出结果都是1*/

	/*
	//vector
	vector<int> vecInt;
	for (int i = 0; i < 10;i++) {
		vecInt.push_back(2*i+1);
	}
	vector<int>::iterator it;
	cout << *vecInt.begin() << endl;
	cout << *(vecInt.end()-1)<< endl;
	cout << ">>>>";
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it<<"\t";
	}
	cout << endl;
	//倒叙
	reverse(vecInt.begin(),vecInt.end());
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
	//升序
	sort(vecInt.begin(), vecInt.end());
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
	//设置内存大小为20
	vecInt.resize(20);
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
	*//*
	//设置域宽
	cout << setw(10);
	//设置填充字符
	cout << setfill('*');
	//设置进制转化
	cout << setbase(10);
	//设置浮点数的数字个数
	cout << setprecision(10);
	//设置小数点后位数,需要与上面的合用
	//cout << setiosflags(ios::fixed);
	//设置指数表示法的小数位数，需要与上面的合用
	//cout << setiosflags(ios::scientific);
	cout << 1008611 << "\t" <<10086.111111111<< endl;
	*/

}