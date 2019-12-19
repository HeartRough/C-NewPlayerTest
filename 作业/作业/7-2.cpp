#include <iostream>
using namespace std;
int f(int n)
{
	int s = 1;
	if (n == 1)
		s = 1;
		else {
			if (n == 3)  cout << s << '\n';
			s = n * f(n - 1);
		}
	return s;
}
void main()
{
	int s;
		s = f(5);
	cout << "s=" << s << endl;
}
