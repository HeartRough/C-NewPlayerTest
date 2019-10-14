#include <iostream>
using namespace std;

class polynomial {
	int* coefficient;//系数
	int* index;//指数
	int aLength;
	int bLength;
public:
	polynomial(const int*, const int*,int,int);//构造函数
	int* getCoefficient();//得到系数指针
	int* getIndex();//得到指数指针
	void setaLength();
	void setbLength();
	void sort();//排序
	void mergeDuplicate();//合并重复元素
	void Display();//输出多项式
	void add(polynomial);//多项式相加
	void ride(polynomial);//多项式相乘
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
	this->aLength = aLength;
	this->bLength = bLength;
}
int* polynomial::getCoefficient() {
	return coefficient;
}
int* polynomial::getIndex() {
	return index;
}
void polynomial::sort() {
	int changeIndex;
	int changeCoefficient;
	for (int i = 0; i < aLength-1; i++) {
		for (int j = i + 1; j < aLength; j++) {
			if (*(index + i) < *(index + j)) {
				//指数排序
				changeIndex = *(index + i);
				*(index + i) = *(index + j);
				*(index + j) = changeIndex;
				//对应系数排序
				changeCoefficient = *(coefficient + i);
				*(coefficient + i) = *(coefficient + j);
				*(coefficient + j) = changeCoefficient;
			}
		}
	}
}
void polynomial::Display() {
	for (int i = 0; i < aLength; i++) {
		cout << *(getCoefficient() + i) << "x^" << *(getIndex() + i)<<"+";
	}
	cout << endl;
}
polynomial::~polynomial() {
	
		delete[]coefficient;
	
	
		delete[]coefficient;
	
}