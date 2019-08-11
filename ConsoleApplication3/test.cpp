#include "pch.h"
template <typename T> void sort(T [], int);
//int main() {
//	/*
//	char c = 'c';
//	char *cptr = &c;
//	void *voidptr = cptr;
//	void *voidptr2 = &c;
//	cout << voidptr2 << "\t" << *voidptr2 << endl;
//	cout << voidptr << endl;
//	cout << *cptr << endl;
//	cout << *voidptr << endl;
//	//void指向的数据类型未知，直接编译器拒绝访问
//	//cout << "cptr的输出：" << cptr << endl;
//	//cout << "转换类型后的输出：" << (void *)cptr << endl;
//	*/
//}
//void out(int = 5);
//void out(int&);
//void out(int, int);
//int main() {
//	int a = 10;
//	int& b = a;
//	out(10);
//	out(b);
//}
//void out(int a ) {
//	cout << a;
//}
//void out(int& a) {
//	cout << a + 2;
//}
//void out(int a , int b ) {
//	cout << a + b;
//}
//函数的重载
/*
void sort(int nums[], int len) {
	cout << "排序前：";
	for (int i = 0; i < len; i++) {
		cout  << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < len-1; i++) {
		for (int j = i+1; j < len ; j++) {
			if (nums[i] > nums[j]) {
				int temp;
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	cout << "排序后：";
	for (int i = 0; i < len; i++) {
		cout  << nums[i] << "\t";
	}
	cout << endl;
}
void sort(float nums[], int len) {
	cout << "排序前：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (nums[i] > nums[j]) {
				float temp;
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	cout << "排序后：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
}
void sort(double nums[], int len) {
	cout << "排序前：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (nums[i] > nums[j]) {
				double temp;
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	cout << "排序后：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
}
*/
int main() {
	int nums[] = { 23,11,44,25,55 };
	float numsT[] = { 23,14.12,1243.3,12,23132 };
	double numsTh[] = { 45.235,2,13242,4,6.346,11,246 };
	sort(numsT, length(numsT));
	sort(nums, length(nums));
	sort(numsTh, length(numsTh));
}

//函数模板
template<typename T>
void sort(T nums[], int len) {
	cout << "排序前：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
	for (int i = 0; i < len - 1; i++) {
		for (int j = i + 1; j < len; j++) {
			if (nums[i] > nums[j]) {
				double temp;
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
			}
		}
	}
	cout << "排序后：";
	for (int i = 0; i < len; i++) {
		cout << nums[i] << "\t";
	}
	cout << endl;
}