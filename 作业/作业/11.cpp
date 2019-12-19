#include <iostream>
using namespace std;
const int pi = 5;
class Test{
private: int x,y = 20;
public: Test(int I,int j) { x = I; y = j; }
int getx() { return x; }
int gety() { return y; }
};
void main()
{
	Test mt(10, 20);
	cout << mt.getx() << endl;
	cout << mt.gety() << endl;
	cout << pi/5 << endl;
}
