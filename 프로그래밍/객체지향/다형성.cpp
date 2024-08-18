#include<iostream>

using namespace std;

class Shape{
public:
    virtual double getArea() = 0;
}

class Triangle{
public:
    int w,h;
    double getArea(){
        return w*h/2;
    }
}

class Rectangle{
public:
    int w,h;
    double getArea(){
        return w*h;
    }
}

int main(){
    Shape* A = new Triangle();
    Shape* B = new Rectangle();
    cout << A->getArea() << endl;
    cout << B->getArea() << endl;
    return 0;
}