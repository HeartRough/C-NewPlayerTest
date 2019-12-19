//*p≤ª––
//¥Ê“…



#include<iostream>
using namespace std;
class MyClass {
public:
	void Print() const { cout << 23; }
};
int main() {
	MyClass* p = new MyClass();
	(*p).Print();
	return 0;
}
