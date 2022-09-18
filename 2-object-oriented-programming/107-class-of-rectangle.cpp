#include<iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    Rectangle r1,r2;//r1,r2 are object of rectangle class
    r1.length=10;
    r1.breadth=5;
    r2.length=15;
    r2.breadth=10;

    cout<<"Area of rectangle r1: "<<r1.area()<<endl;
    cout<<"Area of rectangle r2: "<<r2.area()<<endl;
    cout<<"Perimeter of rectangle r1: "<<r1.perimeter()<<endl;
    cout<<"Perimeter of rectangle r2: "<<r2.perimeter()<<endl;

//    system("pause>0");
    return 0;
}

