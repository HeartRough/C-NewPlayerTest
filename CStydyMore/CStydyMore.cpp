// CStydyMore.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
/**新建二维数组*/
//template<typename T>void newArr(T&,int,int);

int main()
{
	
	
	//SetConsoleTitle("C++Study");
	/*int a = 1, b = 2, c = 0, d;
	d = !a && !b || !c;
	cout << d << endl;*/
	/*bool play = true;
	play = false && false || true;
	cout << boolalpha;
	cout << play << endl;*/
	/*int a = 1, b = 2, c = 3;
	if (a != 2 || (b = c)) {
		cout << "姚老板NB！！" << endl;
	}
	cout << b;*/
	//在一个二维数组中（每个一维数组的长度相同）,
	//每一行都按照从左到右递增的顺序排序,
	//每一列都按照从上到下递增的顺序排序,
	//请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
	/*cout << "Please press the len:";
	int len=1, play=1;
	const int low = 4;
	while (play){
		cin >> len;
		if(len>0){
			play = 0;
		}
		else {
			cout << "请输入大于零的整数" << endl;
		}
	}
	double(*arr)[low] = new double[len][low];
	newArr(arr,len,low);*/
	int intArr[3][5] = {
		{12,31,432,21,32},
		{1,32,55,23,222},
		{32,15,34,32,12}
	};
	int (*arr)[5] = intArr;
	//输出
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "行:";
		for (int j = 0; j < 5; j++) {
			cout << setw(5);
			cout << intArr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	//排序
	//for(int m=0;m<3;m++){
	//	for (int i = 0; i < 5-1; i++) {
	//		for (int j = i; j < 5; j++) {
	//			if (*(*(arr + m) + i) > *(*(arr + i) + j)) {
	//				double temp;
	//				temp = *(*(arr + i) + j);
	//				*(*(arr + i) + j) = *(*(arr + i) + i);
	//				*(*(arr + i) + i) = temp;
	//			}
	//		}
	//	}
	//}
	for (int m = 0; m < 3; m++) {
		for (int i = 0; i < 4; i++) {
			for (int j = i + 1; j < 5; j++) {
				if (intArr[m][i] > intArr[m][j]) {
					int temp;
					temp = intArr[m][i];
					intArr[m][i] = intArr[m][j];
					intArr[m][j] = temp;
				}
			}
		}
	}
	//输出
	for (int i = 0; i < 3; i++) {
		cout << "第" << i + 1 << "行:";
		for (int j = 0; j < 5; j++) {
			cout << setw(5);
			cout << intArr[i][j] << "\t";
		}
		cout << endl;
	}
	int queryNum = 0;
	cout << "请输入需要查询的数字：" << endl;
	cin >> queryNum;
	int play = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (intArr[i][j] == queryNum) {
				cout << i + 1<<"行"<<j + 1<<"列"<<"\t"<<endl;
				play++;
			}
		}
	}
	if (!play) {
		cout << "不存在该数字" << endl;
	}
}

//template<typename T>void newArr(T& arr,int len,int low) {
//	for (int i = 0; i < len; i++) {
//		cout << "第" << i + 1 << "行:" ;
//		for (int j = 0; j < low; j++) {
//			cin >> *(*(arr+i)+j);
//		}
//	}
//	cout << endl;
//	for(int m=0;m<len;m++){
//		for (int i = 0; i < low-1; i++) {
//			for (int j = i; j < low; j++) {
//				if (*(*(arr + m) + i) > *(*(arr + i) + j)) {
//					double temp;
//					temp = *(*(arr + i) + j);
//					*(*(arr + i) + j) = *(*(arr + i) + i);
//					*(*(arr + i) + i) = temp;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < len; i++) {
//		cout << "第" << i + 1 << "行:";
//		for (int j = 0; j < low; j++) {
//			cout << *(*(arr + i) + j) <<"\t";
//		}
//		cout << endl;
//	}
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
