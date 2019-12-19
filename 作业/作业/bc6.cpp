#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char* p = new char[20];
	cout << "请输入一串不大于20个字符的字符串：" << endl;
	cin >>p;
	cout << "逆置前：" << endl;
	char temp;
	int length= strlen(p);
	for (int i = 0; i < length/2; i++) {
		temp = p[i];
		p[i] = p[length - 1 - i];
		p[length - 1 - i] = temp;
	}
	cout << "逆置后:" << p << endl;
}