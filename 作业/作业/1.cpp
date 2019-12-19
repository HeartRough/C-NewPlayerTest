// 作业.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//第一题，存疑

#include <iostream>
using namespace std;
class Mammal {
public:
	Mammal(int age, int weight) :itsAge(age), itsWeight(weight) {}
	virtual ~Mammal() {}
	int GetAge() { return itsAge; }
	int getWeight() { return itsWeight; }  //返回体重
	void setAge(int age) { itsAge = age; }
	void setWeight(int weight) { itsWeight = weight; }
	void speek() { cout << "Mammal language!\n"; }
protected:
	int  itsAge;
	int  itsWeight;
};
class Dog :public Mammal {   //公有继承Mammal类
public:
	Dog(int age, int weight, char* color) :Mammal(age, weight)
	{
		itsColor = new char[10];
		strcpy(itsColor, color);
	}
	char* GetColor() { return itsColor; }
	void speek() { cout << "Dog language!\n"; }
	~Dog()
	{
		delete []itsColor;//  释放动态内存空间
	}
private:
	char* itsColor;
};
int main()
{
	Dog dog(1, 2, "black");
	cout << "color: " << dog.GetColor() << "  age: " << dog.GetAge()
		<< "  weight: " << dog.getWeight() << "  ";
	dog.speek();
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
