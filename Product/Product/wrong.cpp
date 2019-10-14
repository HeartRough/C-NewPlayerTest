#include "pch.h"
#include "classProduct.h"

int main(){
	char* name = (char*)malloc(50);
	char* time = (char*)malloc(50);
	bool easy;
	int price = 0;
	cin >> name >> time >> price;

	Product st = Product(name);
	st.Display();
	Product sa(name, price);
	sa.Display();
	Product sb(name, price, time);
	sb.Display();
    
}
