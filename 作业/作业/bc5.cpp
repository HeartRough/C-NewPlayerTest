#include <iostream>
using namespace std;
int Gcd(int m, int n) {
	//int bei=0,chu=0,yu=1;
	int  yu = m % n;
	/*if (m > n) {
		bei = m;
		chu = n;
		yu = m % n;
	}
	else {
		bei = n;
		chu = m;
		yu = n % m;
	}*/
	/*bei = m > n ? m : n;
	chu = m > n ? n : m;
	yu = bei % chu;*/
	while (yu ) {
		/*bei = chu;
		chu = yu;
		yu = bei % chu;*/
		m = n;
		n = yu;
		yu = m % n;
	}
	return n;
}
int main() {
	cout << "����������������:" << endl;
	int n, m;
	cin >> m >> n;
	if (m <= 0 || n <= 0) { 
		cout << "��������������" << endl; 
	}
	else {
		cout << "���Լ����" << Gcd(m, n) << endl;
		cout << "��С��������" << m * n / Gcd(m, n) << endl;
	}
}