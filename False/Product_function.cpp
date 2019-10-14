#include "classProduct.h"

Product::Product(const char *name){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy_s(productName,strlen(name)+1,name);
    }
}
Product::Product(const char *name,int price){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy_s(productName,strlen(name)+1,name);
    }
    productPrice=price;
}
Product::Product(const char* name,int price,const char* time){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy_s(productName,strlen(name)+1,name);
    }
    if(time){
        productTime=new char[strlen(time)+1];
        strcpy_s(productTime,strlen(time)+1,time);
    }
    productPrice=price;
}
void Product::setProductName(const char *name){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy_s(productName,strlen(name)+1,name);
    }
}
void Product::setProductPrice(int price){
    productPrice=price;
}
void Product::setProductTime(const char*time){
    if(time){
        productTime=new char[strlen(time)+1];
        strcpy_s(productTime,strlen(time)+1,time);
    }
}
void Product::setProducterName(const char* erName){
    if(erName){
        producterName=new char[strlen(erName)+1];
        strcpy_s(producterName,strlen(erName)+1,erName);
    }
}
void Product::setEasyToBad(bool easy){
    easyToBad=easy;
}
void Product::setProductCanBeUsedTo(const char* canBeUsedTo){
    if(canBeUsedTo){
        productCanBeUsedTo=new char[strlen(canBeUsedTo)+1];
        strcpy_s(productCanBeUsedTo,strlen(canBeUsedTo)+1,canBeUsedTo);
    }
}
char *Product::getProductName(){
    return productName;
}
int Product::getProductPrice(){
    return productPrice;
}
char *Product::getProductTime(){
    return productTime;
}
char *Product::getProducterName(){
    return producterName;
}
bool Product::getEasyToBad(){
    return easyToBad;
}
char *Product::getProductCanBeUsedTo(){
    return productCanBeUsedTo;
}
void Product::Display() {
	if (productName && getProductTime() && getProductPrice())
		cout << "Product:\t" << getProductName() << "\t" << getProductTime() << "\t" << getProductPrice();
	else if (productName && getProductTime())
		cout << "Product:\t" << getProductName() << "\t" << getProductTime();
	else if(productName&&getProductPrice())
		cout << "Product:\t" << getProductName() << "\t" << getProductPrice();
	else if (productName)
		cout << "Product:\t" << getProductName();
	// cout<<getProducterName()<<"\t"<<getProductCanBeUsedTo()<<"\t"<<getEasyToBad()<<endl;
	cout << "\n";
}
Product::~Product(){
    if(productName){
        delete []productName;
    }
    if(productTime){
        delete []productTime;
    }
    if(producterName){
        delete []producterName;
    }
    if(productCanBeUsedTo){
        delete []productCanBeUsedTo;
    }
}