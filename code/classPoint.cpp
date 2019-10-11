#include "pch.h"
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