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
	reverse(vecInt.begin(),vecInt.end());
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
	sort(vecInt.begin(), vecInt.end());
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
	cout << endl;
	vecInt.resize(20);
	for (it = vecInt.begin(); it != vecInt.end(); ++it) {
		cout << *it << "\t";
	}
}