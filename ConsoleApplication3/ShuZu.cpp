#include "pch.h"

int main() {
	const int N = 5;
	int num[N];
	char numA[] = { 99,100,101,'a' };
	//for (int i = 0; i < N; i++) {
	//	cin >> num[i];
	//}
	for (int i = 0; i < length(numA); i++) {
		cout << numA[i]<<" ";
	}
	cout << length(numA);

}