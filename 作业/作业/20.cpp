#include <iostream>
using namespace std;
class Test {
public:    int x = 33;
	Test(int i = 0)
{
	x = i + x;
}
	  int Getnum()
	  {
		  return Test::x + 7;
	  }
};
             
void main()
{
	Test  test;
	cout << test.Getnum() << endl;
}
