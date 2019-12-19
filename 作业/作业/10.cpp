//Ã»ÎÊÌâ

#include <iostream>
using namespace std;
int gun(int x, int y)
{
	static int m = 0, i = 2;
	i = m + 1;
	m = i + x + y;
	return m;
}
int main()
{
	int j = 4, m = 1, k;
	k = gun(j, m); cout << k << endl;
	k = gun(j, m); cout << k << endl;
}
