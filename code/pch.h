#include <iostream>//基础输入输出函数
using namespace std;

#include <math.h>//基础数学函数

#include "windows.h"//控制台管理

#include <string>//字符串的输入

#include <ctime>//随机数函数
#define random(a,b) (rand()%((b)-(a)+1)+(a))

#include <iomanip>    //用于固定cin\cout的格式 

template <typename T>//数组长度函数
int length(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

template <typename T>T add(T a, T b){//求和函数
	return a + b;
}

#include <vector>//动态数组

#include <algorithm>//算法




