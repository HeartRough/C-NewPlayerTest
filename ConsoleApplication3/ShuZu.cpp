#include "pch.h"

int main() {
	/*
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
	*/
	//ÅÅÐò
	//int temp;
	//int num[5] = { 3,12,7,4,9 };
	//Ã°ÅÝÅÅÐò
	/*
	for(int j=0;j<length(num)-1;j++){
		for (int i = 0; i < length(num) - j; i++) {
			if (num[i] < num[i + 1]) {
				temp = num[i];
				num[i] = num[i + 1];
				num[i + 1] = temp;
			}
		}
	}
	*/
	//Ñ¡ÔñÅÅÐò
	/*
	for(int j= 0;j<length(num);j++){
		int max = num[j];
		int maxIndex = j;
		for (int i = j; i < length(num); i++) {
			if (max < num[i]) {
				max = num[i];
				maxIndex = i;
			}
		}
		temp = num[j];
		num[j] = num[maxIndex];
		num[maxIndex] = temp;
	}
	for (int i = 0; i < length(num); i++) {
		cout << num[i] << endl;
	}
	*/





	
	//×îÐ¡»ØÎÄµÄÅÐ¶Ï
	//https://www.felix021.com/blog/read.php?2040
	char str[] = "adada";
	for (int i = 0; i < (length(str)-1)/2; i++) {
		//cout << str[i] << endl;
		if (str[i] != str[length(str) - 2 - i]) {
			break;
		}
		if ( i == (length(str) - 1) / 2 -1) {
			cout << "Yes"<<endl;
		}
	}
	
}