
#ifndef PCH_H
#define PCH_H
//基础输入输出函数
#include <iostream>
using namespace std;

//基础数学函数
#include <math.h>

//控制台管理
#include "windows.h"

//字符串的输入
#include <string>

//随机数函数
#include <ctime>
#define random(a,b) (rand()%((b)-(a)+1)+(a))
//TODO
//template <typename T>
//T random(T a, T b) {
//	return (rand() % ((b)-(a)+1) + (a));
//}
//int main(){srand(unsigned(time(NULL)));}

//用于固定cin\cout的格式
#include <iomanip>     

//数组长度函数
template <typename T>
int length(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}
//求和函数
template <typename T>T add(T a, T b){
	return a + b;
}
//动态数组
#include <vector>
//递归排序
// template <typename T>T sort(const T &A,int Length){
// 	if(empty(A)){
// 		return A;
// 	}
// 	T comparer;
// 	comparer=A[0];
// 	vector<T> arrayless;
// 	vector<T> arraybigger;
// 	int m=1,n=1;
// 	for(int i=1;i<Length;i++){
// 		if(A[i]<comparer){
// 			arrayless.resize(m);
// 			arrayless[m-1]=A[i];
// 			m++;
// 		}
// 		else{
// 			arraybigger.resize(n);
// 			arraybigger[n-1]=A[i];
// 			n++;
// 		}
// 	}
// 	return 
// }
//算法
#include <algorithm>
#endif //PCH_H



