#include <iostream>
using namespace std;

class polynomial {
	int* coefficient;//ϵ��
	int* index;//ָ��
public:
	polynomial(const int*, const int*,int,int);//���캯��
	int* getCoefficient();//�õ�ϵ��ָ��
	int* getIndex();//�õ�ָ��ָ��
	void sort();//����
	void deleteDuplicate();//ɾ���ظ�Ԫ��
	void Display();//�������ʽ
	void add(polynomial);//����ʽ���
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
}
int* polynomial::getCoefficient() {
	return coefficient;
}
int* polynomial::getIndex() {
	return index;
}
void 