// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


#ifndef PCH_H
#define PCH_H
#include <iostream>
using namespace std;

//字符串的输入
#include <string>

//随机数函数
#include <ctime>
#define random(a,b) (rand()%(b-a+1)+a)
//int main(){srand(unsigned(time(NULL)));}

//用于固定cin\cout的格式
#include <iomanip>     

//数组长度函数
template <typename T>
int length(T& arr) {
	return sizeof(arr) / sizeof(arr[0]);
}

//vector动态数组
#include <vector>

//算法
#include <algorithm>

#endif //PCH_H
