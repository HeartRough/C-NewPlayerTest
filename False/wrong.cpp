#include "pch.h"

#include "classProduct.h"
int main(){
    char *name;
    char *time;
    bool easy;
    int price=0;
    cin>>name>>time>>price;

	Product st(name);
    Product sa(name,price);
    Product sb(name,price,time);
    st.Display();
    sa.Display();
    sb.Display();
    
}
