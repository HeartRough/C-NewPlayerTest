#include <iostream>
using namespace std;
int main() {
	cout << "请输入20个整数：" << endl;
	int* p = new int[20];
	for (int i = 0; i < 20; i++) {
		cin >> p[i];
	}
	int temp;//用于交换
	for (int i = 1; i < 19; i++) {
		if (p[0] > p[i]) {
			temp = p[0];
			p[0] = p[i];
			p[i] = temp;
		}
		if (p[19] < p[i]) {
			temp = p[19];
			p[19] = p[i];
			p[i] = temp;
		}
	}
	int num = 0;//num求和，n记录不是最大最小的个数
	double n = 0.0;
	for (int i = 0; i < 20; i++) {
		if (p[i] != p[0] && p[i] != p[19]) {
			num += p[i];
			n++;
		}
	}
	if (n != 0)cout << num / n << endl;
	else cout << "没有剩下的值了啊喂！！！" << endl;
}