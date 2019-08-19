#include "pch.h"

//新建一维vector数组int型
vector<int> newIntArr(int lie) {
	srand((int)(time(NULL)));
	vector<int> arrO;
	arrO.resize(5);
	for (int i = 0; i < lie; i++) {
		arrO[i] = random(0, 100);
	}
	//for (int i = 0; i < lie; i++) {
	//	cout << setw(6) << arrO[i] << "\t";
	//}
	return arrO;
}
//新建二维vector数组int型
vector<vector<int>> newIntArr(const int hang, const int lie) {
	srand((int)(time(NULL)));
	vector< vector<int> > arrT;
	arrT.resize(hang);
	for (int m = 0; m < hang; m++) {
		arrT[m].resize(lie);
	}
	for (int i = 0; i < hang; i++) {
		for (int j = 0; j < lie; j++) {
			arrT[i][j] = random(0, 100);
		}
	}
	//输出
	//for (int i = 0; i < hang; i++) {
	//	for (int j = 0; j < lie; j++) {
	//		cout << setw(6) << arrT[i][j];
	//	}
	//	cout << endl;
	//}
	return arrT;
}

//数组长度函数
//template <typename T>
//int length(T& arr) {
//	return sizeof(arr) / sizeof(arr[0]);
//}
