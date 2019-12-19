#include <iostream>
using namespace std;
class Shape
{
public:
	double x, y;
	virtual void area() = 0;
};
class Circle : public Shape
{
public:
	double r;
	Circle(double radius) { r = radius; }
	void area() { cout << "area of circle:" << 3.14 * r * r << endl; }
};
class Rentangle : public Shape
{
public:
	double w, h;
	Rentangle(double width, double height) { w = width; h = height; }
	void area() { cout << "area of retangle:" << w * h << endl; }
};
int main()
{
	Circle cir(10.0);
	Rentangle rec(3.0, 5.0);
	Shape* p = &cir;
	Shape& q = rec;
	p->area();
	q.area();
	return 0;
}
