#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;


class Point{
    double X,Y;
public:
    Point(double a=0,double b=0);
    double GetX();
    double GetY();
    friend double GetLength(Point &A,Point &B);
};
Point::Point(double a,double b){
    X=a;
    Y=b;
}
double Point::GetX(){
    return X;
}
double Point::GetY(){
    return Y;
}
double GetLength(Point &A,Point &B){
    return sqrt(pow((A.X-B.X),2)+pow((A.Y-B.Y),2));
}
int main(){
     vector<int> array1(3,1);
     vector<int> array2(4,2);
     cout<<array1.empty()<<endl;
    
}
// int main(){
//     Point A(3.0,4.0);
//     Point B(5.0,2.0);
//     cout<<"("<<A.GetX()<<","<<A.GetY()<<")"<<endl;
//     cout<<"("<<B.GetX()<<","<<B.GetY()<<")"<<endl;
//     cout<<GetLength(A,B)<<endl;
// }