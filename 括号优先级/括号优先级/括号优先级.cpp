// 括号优先级.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
static int Y = 1;
int get_num(int* pst, int len, int val)
{
	int i = len - 1;
	if (pst[i] == val)
		return i;
	else
	{
		len--;
		get_num(pst, len, val);
	}
}
int main()
{
	char ChiZi[]= "( 优先级 ( 优先级 ) ( ( 优先级 ) ( 优先级 ) ) )";
	for (int i = 0; i < sizeof(ChiZi) / sizeof(ChiZi[0]) ; i++) {
		
		if (ChiZi[i] == '(') {
			cout << Y;
			Y++;
			continue;
		}
		if (ChiZi[i] == ')') {
			Y--;
			cout << Y;
			continue;
		}
		cout << ChiZi[i];
	}
	/*int WeiZhi[20];
	int weizhi=0;
	int YouXianJi[20];
	char* a = ChiZi;
	for (int i = 0; i < sizeof(ChiZi) / sizeof(ChiZi[0])-1; i++) {
		if (ChiZi[i] == '(') {
			WeiZhi[weizhi]=i;
			YouXianJi[weizhi] = Y;
			Y++;
		}
		if (ChiZi[i] == '(') {
			WeiZhi[weizhi] = i;
			YouXianJi[weizhi] = Y;
			Y--;
		}
	}
	for (int i = Y; i >= 1; i--) {
		int a = 0, b = 0;
		for (int i = 0; i <= weizhi; i++) {

		}
	}
	cout << ChiZi << endl;*/
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
