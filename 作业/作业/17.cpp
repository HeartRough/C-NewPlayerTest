#include <iostream>
using namespace std;
class f {
private: int x, y;
public: void f1(int a, int b) { x = a; y = b; }
	  void print() { cout << x << y << endl; }
};
int main()
{
	f a;
	a.f1(1.5, 1.8);
	a.print();
}
