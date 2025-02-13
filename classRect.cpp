#include<bits/stdc++.h>
using namespace std;

class Rect{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }   
    int diagonal(){
        return sqrt(length*length+breadth*breadth);
    }
};

int main(){
    Rect r;
    Rect *p;
    p= &r;
    p->length=10;
    p->breadth=5;
    cout << "Area: " << p->area() << '\n';
    cout << "Perimeter: " << p->perimeter() << '\n';
    cout << "Diagonal: " << p->diagonal() << '\n';
    Rect r1;
    Rect *p1;
    p1= &r1;
    p1->length=20;
    p1->breadth=10;
    cout<<"Area:"<<r1.area()<<'\n';
    cout<<"perimeter"<<r1.perimeter()<<'\n';
    cout<<"Diagonal"<<r1.diagonal()<<'\n';
    return 0;
   
}