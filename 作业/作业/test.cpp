#include <iostream>
using namespace std;
class A {
private:
	int a;
public:
	A(int);
	int geta();
};

class B :public A {
public :
	B();
};

A::A(int i) :a(i) {};

int A::geta() {
	return a;
}

B::B() :A(12) {};

int f(int n) {
	return n * n+2*n+1;
}

void go(const int ary[][5],int m) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 5; j++) {
			cout << ary[i][j] << "\t";
		}
		cout << endl;
	}
}
int main() {
	//B c;
	//cout<<c.geta();
	int arr[][5] = { {1,2,3} };
	go(arr, sizeof(arr) / sizeof(arr[0]));
	
}