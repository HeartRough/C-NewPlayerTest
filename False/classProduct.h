#ifndef _Product
#define _Product

#include <iostream>
#include <cstring>
using namespace std;

class Product{
    char *productName;
    int productPrice;
    char *productTime;
    char *producterName;
    bool easyToBad;
    char *productCanBeUsedTo;
public:
    Product(const char *);
    Product(const char *,int);
    Product(const char *,int,const char *);
    Product(const Product &);
    void setProductName(const char *);
    void setProductPrice(int);
    void setProductTime(const char*);
    void setProducterName(const char*);
    void setEasyToBad(bool);
    void setProductCanBeUsedTo(const char*);
    char *getProductName();
    int getProductPrice();
    char *getProductTime();
    char *getProducterName();
    bool getEasyToBad();
    char *getProductCanBeUsedTo();
    void Display();
    ~Product();
};
#endif