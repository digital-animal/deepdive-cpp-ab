#include<iostream>
using namespace std;

#define PI 3.14159

class Shape // abstract class i.e interface
{
public:
    virtual float area()=0; // derived class must implement this method
    virtual float perimeter()=0; // derived class must implement this method
};

class Rectangle:public Shape
{
private:
    int length;
    int breadth;
public:
    // constructor
    Rectangle(int l=0, int b=0)
    {
        setLength(l);
        setBreadth(b);
    }

    // setters
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }

    // getters
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }

    // facilitator
    float area()
    {
        return getLength()*getBreadth();
    }
    float perimeter()
    {
        return 2*(getLength()+getBreadth());
    }
};


class Circle:public Shape
{
private:
    int radius;
public:
    // constructor
    Circle(int r=0)
    {
        setRadius(r);
    }

    // setters
    void setRadius(int r)
    {
        radius=r;
    }

    // getters
    int getRadius()
    {
        return radius;
    }

    // facilitator
    float area()
    {
        return PI*getRadius()*getRadius();
    }
    float perimeter()
    {
        return 2*PI*getRadius();
    }
};

int main()
{
    Shape *t;
    Rectangle rect(4, 9); // in stack
    t=&rect;
    cout<<t->area()<<endl;
    cout<<t->perimeter()<<endl;
    cout<<endl;

    t = new Rectangle(2, 3); // in heap
    cout<<t->area()<<endl;
    cout<<t->perimeter()<<endl;
    cout<<endl;

    t=new Circle(10);
    cout<<t->area()<<endl;
    cout<<t->perimeter()<<endl;
    cout<<endl;

    delete t;

    return 0;
}