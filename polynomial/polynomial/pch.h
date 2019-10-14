#include <iostream>
using namespace std;

class polynomial {
	int* coefficient;//ϵ��
	int* index;//ָ��
	int aLength;
	int bLength;
public:
	polynomial(const int*, const int*,int,int);//���캯��
	int* getCoefficient();//�õ�ϵ��ָ��
	int* getIndex();//�õ�ָ��ָ��
	void setaLength();
	void setbLength();
	void sort();//����
	void mergeDuplicate();//�ϲ��ظ�Ԫ��
	void Display();//�������ʽ
	void add(polynomial);//����ʽ���
	void ride(polynomial);//����ʽ���
	~polynomial();//��������
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
				//ָ������
				changeIndex = *(index + i);
				*(index + i) = *(index + j);
				*(index + j) = changeIndex;
				//��Ӧϵ������
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