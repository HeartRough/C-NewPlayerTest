//รปฮสฬโ


#include <iostream>
#include <string>
using namespace std;
void fun(char* s, char& c) {
	c = s[sizeof(s)/2];
}
int main()
{
	char str[] = "ABCDE";
	char ch = str[1];
	fun(str,ch );
	cout << ch;
	return 0;
}
