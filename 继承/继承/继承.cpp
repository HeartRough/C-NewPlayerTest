// 继承.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

//P164 5
/*class A {
public :
	int n;
};
class B :virtual public A{

};
class C:virtual public A {

};
class D :public B, public C {

};
inline void print(D& d) {
	cout << d.A::n << d.B::n << d.C::n << d.n << endl;//TO-DO  d.n到底指向什么？
}
int main()
{
	D d;
	d.A::n = 10;
	print(d);
	d.B::n = 20;
	print(d);
	d.C::n = 30;
	print(d);
	d.n = 40;
	print(d);

}*/
//P162 3
/*class A {
public:
	A() {
		cout << 'A';
	}
};
class B {
public:
	B() {
		cout << 'B';
	}
};
class C :public A {
public:
	C() {
		cout << 'C';
	}
};
class D :public A, public B {
public:
	D() {
		cout << 'D';
	}
};
class E :public B, public virtual C {
public:
	D d;
	E() {
		cout << 'E';
	}
};
class F :public virtual C, public D, public E {
public:
	C c, d;
	E e;
	F() {
		cout << 'F';
	}
};
int main() {
	A a;
	cout << '\n';
	B b;
	cout << '\n';
	C c;
	cout << '\n';
	D d;
	cout << '\n';
	E e;
	cout << '\n';
	F f;
}*/