#include "pch.h"

int main() {
	//cout << "The third" << endl;
	/*
	double num=0;
	for (int i = 0; i < 6; i++) {
		double a;
		cout << "�������" << i + 1 << "�µĹ���" << endl;
		cin >> a;
		num += a;
		if (i == 5) {
			cout << num / 6;
		}
	}
	*//*
	int dayOfWeek = 2;
	int dayOfMonth = 31;
	cout << "һ\t��\t��\t��\t��\t��\t��" << endl;
	for (int i = 1; i <= 31; i++) {
		if (i < dayOfWeek) {
			cout << "\t";
			continue;
		}
		if (i % 7 == 0) {
			cout <<i<< "\n";
		}
		else {
			cout <<i<< "\t";
		}
	}
	*//*
	
	for (int n = 1; n <= 5; n++) {
		for (int m = 1; m <=5-n; m++) {
			cout << " ";
		}
		for (int m = 1; m < 2*n; m++) {
			cout << "*";
		}
		cout << "\n";
	}
	//for (int n = 1; n <= 4; n++) {
	//	for (int m = 1; m <= n; m++) {
	//		cout << " ";
	//	}
	//	for (int m = 1; m <= 2 * (5 - n) - 1; m++) {
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}
	for (int n = 4; n > 0; n--) {
		for (int m = 0; m < 5 - n; m++) {
			cout << " ";
		}
		for (int m = 1; m < 2 * n ; m++) {
			cout << "*";
		}
		cout << endl;
	}
	*/
}