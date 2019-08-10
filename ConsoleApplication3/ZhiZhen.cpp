#include "pch.h"

int& back(int& num) {
	//int num = 10;
	//int& letgo = num;
	num++;
	return num;
}
void what() {
	int x = 0;
	int y = 1;
	int z = 2;
	cout << "Try HanShu ZhiZhen" << endl;
}
string splicingName(const string& toName, const string& toStr) {
	return "# 您对 [" + toName + "] 说：" + toStr + "。";
}
int main() {
	/*
	void (*ptrWhat)()=what;
	ptrWhat();
	*/
	int num = 10;
	int& result = back(num);
	what();
	cout << "result=" << result;
	/*
	cout << "请输入对方名字：";
	string toName;
	getline(cin, toName);
	cout << "请输入你想说的话：";
	string toStr;
	getline(cin, toStr);
	cout << endl << splicingName(toName, toStr)<<endl;
	*/
	//空指针,char指针的正确输出方法
	/*
	void * voidptr = nullptr;
	int* a = nullptr;
	int b = 66;
	cout << a<<endl;
	a = &b;
	cout << a << "\t" << &a<<endl;
	char c = 'c';
	char* cptr = &c;
	//错误
	cout << cptr << "\t"<<*cptr<<endl;
	//voidptr = (void *)cptr;
	//cout << *voidptr;
	//正确
	cout << (void *)cptr<<endl;
	*/
	//sizeof
	/*
	int c[] = { 1,2,3,4,5 };
	int* c_ptr = c;
	double a[] = { 1,2,3,4,5 };
	double* a_ptr = a;
	cout << sizeof(a) << "\t" << sizeof(a_ptr) << endl;
	cout << sizeof(c) << "\t" << sizeof(c_ptr) << endl;
	char c = 'a';
	float f = 10;
	cout << sizeof(c) << "\t" << sizeof(f);
	*//*
	int *ptr = new int;
	*ptr = 90;
	int*ptr1 = ptr;
	delete ptr;
	cout << *ptr;
	*/
	//指针与二维数组
	/*
	int(*p)[4] = new int[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			*((*p + i) + j) = i + j;
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout<<*((*p + i) + j)<<"\t";
		}
		cout << endl;
	}
	*/
	//函数与指针
	//函数返回引用类型
	/*
	int num = 10;
	int& result = back(num);
	//back(num) = 55;
	//what();
	cout << result << endl;
	*/
}