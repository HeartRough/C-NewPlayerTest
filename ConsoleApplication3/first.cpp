#include "pch.h"
using namespace std;
//������������������
class object {
public:
	int a;
	int b;
public:
	void out() {
		cout << a << "\t" << b << endl;
	}
};

int main() {
	//�ַ�����������������쳣
	//cout << "�Ƴ���һ������" << endl;
	/*
	cout << "Please print 20 end:";
	char str[20];
	scanf_s("%s", str);
	cout << str;
	*/
	//while��++����·
	/*
	int n = 0;
	while (n++ <= 2);
	cout << n;
	*/
	//�����ʱ������
	/*
	srand(unsigned(time(NULL)));
	for(int i=0;i<10;i++){
		cout << 5 + rand() % 11 << "\t" << endl;
		cout << random(5, 15) << endl;
	}
	*//*
	int n = 0;
	int m = 1;
	while (n++ <= 2) {
		m++;
	}
	cout << n << endl;
	*/
	/*
	object a;
	a.a = 1;
	a.b = 2;
	a.out();
	object *b;
	b->a = 3;
	b->b = 4;
	b->out();
	*/
}


