#include "pch.h"
//int sum = 1000;

//double letgo(int x,int y) {
//	if (y ==0) {
//		throw y;
//	}
//	else {
//		return x/y;
//	}
//	return 0;
//}
float check(int x, float y) {
	if (y < 0 || y>5) {
		throw y;
		return 0;
	}
	if (x < 16 || x>25) {
		throw x;
	}
	else {
		return y/5*100;
	}
	return 0;
}
int main() {
	//��̬����Ķ���
	/*vector<int> intArr = newIntArr(5);
	vector<vector<int>> intArrT = newIntArr(3, 4);*/
	//try_catch
	/*int a = 0;
	int b = 1;
	try {
		cout << letgo(b, a) << endl;
	}
	catch (int) {
		cout << "��ĸ����Ϊ��";
	}*/
	//P50��1
	/*int x, y, sum;
	cout << "������x��y��ֵ��" << endl;
	cin >> x >> y;
	sum = add(x, y);
	cout << x<<"+"<<y<<"=" << sum << endl;*/
	//P51��2
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
	cout << "����" << num << "��" << endl;*/
	//��ͬλ�õ�sum�ķ���
	/*int sum = 100;
	{
		int sum = 10;
		cout << ::sum << endl;
	}
	cout << ::sum;*/
	//P51:4
	/*char num[10];
	cin >> num;
	int old;
	cin >> old;
	float socre;
	cin >> socre;
	float socres;
	try {
		socres= check(old, socre);
	}
	catch (int) {
		cout << "�������ݲ�����" << endl;
		return 0;
	}
	catch (float) {
		cout << "�÷����ݲ�����" << endl;
		return 0;
	}
	cout << num << ":" << old << "��,�ɼ���" << socres << "%" <<endl;*/

}
