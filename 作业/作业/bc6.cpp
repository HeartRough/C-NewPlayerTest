#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char* p = new char[20];
	cout << "������һ��������20���ַ����ַ�����" << endl;
	cin >>p;
	cout << "����ǰ��" << endl;
	char temp;
	int length= strlen(p);
	for (int i = 0; i < length/2; i++) {
		temp = p[i];
		p[i] = p[length - 1 - i];
		p[length - 1 - i] = temp;
	}
	cout << "���ú�:" << p << endl;
}