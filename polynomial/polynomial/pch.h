#include <iostream>
using namespace std;

class polynomial {
	int* coefficient;//系数
	int* index;//指数
public:
	polynomial(const int*, const int*,int,int);//构造函数
	int* getCoefficient();//得到系数指针
	int* getIndex();//得到指数指针
	void sort();//排序
	void deleteDuplicate();//删除重复元素
	void Display();//输出多项式
	void add(polynomial);//多项式相加
	~polynomial();//析构函数
};
polynomial::polynomial(const int* a, const int* b,int aLength,int bLength) {
	if (aLength != bLength) {
		cout << "error!" << endl;
		exit;
	}
	coefficient = new int[aLength];
	index = new int[bLength];
	for(int i=0;i<aLength;i++){
		coefficient[i] = a[i];
		index[i] = b[i];
	}
}
int* polynomial::getCoefficient() {
	return coefficient;
}
int* polynomial::getIndex() {
	return index;
}
void 