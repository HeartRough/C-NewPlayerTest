//No problem
#include <iostream>
#include <math.h>
using namespace std;
void area(){
  double a,b,c;
  cout << "Input a,b,c: ";
  cin >> a >> b >> c;
  double s;
  if (a + b > c&& a + c > b&& b + c > a)
   {
	double l = (a + b + c) / 2;
	s = sqrt(l * (l - a)*(l - b)*(l - c));
	cout << "The area is: " << s << endl;
	}
else  cout << "Error! " << endl;
}
void main()
{
	area();
}
