#include "classProduct.h"

Product::Product(const char *name){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy(productName,name);
    }
}
Product::Product(const char *name,int price){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy(productName,name);
    }
    productPrice=price;
}
Product::Product(const char* name,int price,const char* time){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy(productName,name);
    }
    if(time){
        producterName=new char[strlen(time)+1];
        strcpy(productTime,time);
    }
    productPrice=price;
}
void Product::setProductName(const char *name){
    if(name){
        productName=new char[strlen(name)+1];
        strcpy(productName,name);
    }
}
void Product::setProductPrice(int price){
    productPrice=price;
}
void Product::setProductTime(const char*time){
    if(time){
        productTime=new char[strlen(time)+1];
        strcpy(productTime,time);
    }
}
void Product::setProducterName(const char* erName){
    if(erName){
        producterName=new char[strlen(erName)+1];
        strcpy(producterName,erName);
    }
}
void Product::setEasyToBad(bool easy){
    easyToBad=easy;
}
void Product::setProductCanBeUsedTo(const char* canBeUsedTo){
    if(canBeUsedTo){
        productCanBeUsedTo=new char[strlen(canBeUsedTo)+1];
        strcpy(productCanBeUsedTo,canBeUsedTo);
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
void Product::Display(){
    cout<<"Product:\t"<<getProductName()<<"\t"<<getProductPrice()<<"\t"<<getProductTime()<<"\n";
    // cout<<getProducterName()<<"\t"<<getProductCanBeUsedTo()<<"\t"<<getEasyToBad()<<endl;
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