// C++网考.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//#include <iostream>
//using namespace std;
//int main()
//{
//	int n,p,price;
//	cin >> n;
//	if (n < 0) {
//		cout << "请输入合理的数值。" << endl;
//		return 0;
//	}
//	if (n <= 10&&n>0) {
//		p = 10 * n;
//	}
//	if (n > 10 && n <= 50) {
//		p = 100 + 5 * (n - 10);
//	}
//	if (n > 50) {
//		p = 400;
//	}
//	price = 3200 - p;
//	cout << price << endl;
//}

//#include <iostream>
//using namespace std;
//int L=0;
//int judge(int N) {
//	int m, n;
//	m = N / 2;
//	n = N % 2;
//	if (n == 0) {
//		L++;
//	}
//	if (m == 0) {
//		return L;
//	}
//	return judge(m);
//}
//int main() {
//	int N;
//	cin >> N;
//	cout << judge(N) << endl;
//}

//#include <iostream>
//#include <vector>
//using namespace std;
//int judge(int n) {
//	return n % 10;
//}
//int main() {
//	int N;
//	cin >> N;
//	vector<int> vec(N);
//	vector<int>::iterator it;
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		cin >> *it;
//	}
//	//vector<int>::iterator it;
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		if (judge(*it) == 1 || judge(*it) == 4 || judge(*it) == 7) {
//			cout << *it << " ";
//		}
//	}
//	cout << endl;
//	//vector<int>::iterator it;
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		if (judge(*it) == 2 || judge(*it) == 5 || judge(*it) == 8) {
//			cout << *it << " ";
//		}
//	}
//	cout << endl;
//	//vector<int>::iterator it;
//	for (it = vec.begin(); it != vec.end(); ++it) {
//		if (judge(*it) == 3 || judge(*it) == 6 || judge(*it) == 9) {
//			cout << *it << " ";
//		}
//	}
//	cout << endl;
//}

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<string> name(N);
	vector<vector<double>> GDP(N);
	for (int i = 0; i < N; i++) {
		GDP[i].resize(4);
	}
	for (int i = 0; i < N; i++) {
		cin >> name[i] >> GDP[i][0] >> GDP[i][1] >> GDP[i][2];
		GDP[i][3] = i;
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i; i < N - 1 ; j++) {
			double a, b, c, d;
			if ((GDP[i][0] + GDP[i][1] + GDP[i][2]) < (GDP[i + 1][0] + GDP[i + 1][1] + GDP[i + 1][2])) {
				a = GDP[i][0];
				b = GDP[i][1];
				c = GDP[i][2];
				d = GDP[i][3];
				GDP[i][0] = GDP[i + 1][0];
				GDP[i][1] = GDP[i + 1][1];
				GDP[i][2] = GDP[i + 1][2];
				GDP[i][3] = GDP[i + 1][3];
				GDP[i + 1][0] = a;
				GDP[i + 1][1] = b;
				GDP[i + 1][2] = c;
				GDP[i + 1][3] = d;
			}
		}
	}
	cout << name[GDP[0][4]] << " ";

}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
