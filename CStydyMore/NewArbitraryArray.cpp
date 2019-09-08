#include "pch.h"

//double letgo(int two,int one) {
//	if (one > 9) {
//		throw one;
//	}
//	else {
//		return two / one;
//	}
//	return 0;
//}
int main() {
	//vector<int> intArr = newIntArr(5);
	//vector<vector<int>> intArrT = newIntArr(3, 4);
	//int arr[] = { 2,3,4,5 };
	//cout << length(intArr);
	//TODO数组长度函数放在function.cpp上为何不行
	//cout << "Let's go!" << endl;
	/*int a = 0;
	int b = 1;
	try {
		cout << a / b<<endl;
		cout << letgo(b,a);
	}
	catch (int) {
		cout << "分母不可为零";
	}*/
	//P50：1
	/*int x, y, sum;
	cout << "请输入x和y的值：" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x<<"+"<<y<<"=" << sum << endl;*/

	//P51：2
	/*const double pi = 3.14;
	cout << "Please input the R:" << endl;
	int r;
	cin >> r;
	double S = pi * pow(r,2);
	double C = 2 * pi * r;
	cout << "S=" << S << ",C=" << C << endl;*/

	//3
	/*double* arr = new double[20];
	for (int i = 0; i < 20; i++) {
		*arr = random(-1,1);
		arr++;
	}
	int num = 0;
	for (int i = 0; i < 20; i++) {
		arr--;
		if (*arr < 0)num++;
		cout << *arr << endl;
	}
	cout << "负数" << num << "个" << endl;*/
}
