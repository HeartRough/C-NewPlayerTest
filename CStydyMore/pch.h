
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

//vector动态数组
#include <vector>
//新建int型二维动态数组
vector<vector<int>> newIntArr(int, int);
//新建int型一维动态数组
vector<int> newIntArr(int);

//算法
#include <algorithm>
#endif //PCH_H



