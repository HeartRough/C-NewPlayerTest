//ok?为什么有的时候就神经质一般的不行了
#include <iostream>//基础输入输出函数
using namespace std;
#include <vector>
#include <math.h>//基础数学函数
#include "windows.h"//控制台管理
#include <cstring>//字符串的输入
#include <ctime>//随机数函数
#include <iomanip>    //用于固定cin\cout的格式 
#include <algorithm>//算法
#include <vector>//动态数组

#define random(a,b) (rand()%((b)-(a)+1)+(a))

template <typename T>//数组长度函数
int length(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

template <typename T>T add(T a, T b){//求和函数
	return a + b;
}


