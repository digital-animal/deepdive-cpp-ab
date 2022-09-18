#include<iostream>
#include<cstdio>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l=0,int b=0)
    {
        length=l;
        breadth=l;
    }
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

///Cuboid class
class Cuboid:public Rectangle
{
private:
    int height;
public:
    Cuboid(int h=0)
    {
        height=h;
    }

    void setHeight(int h)
    {
        height=h;

    }

    int getHeight()
    {
        return height;
    }

    int Volume()
    {
        return getLength()*getBreadth()*height;
    }

    bool isCube()
    {
        return ((getLength()==getBreadth()) && (getLength()==height));
    }

    ~Cuboid()
    {
        cout<<"Cuboid Destroyed"<<endl;
    }
};

int main()
{
    Rectangle r;
    r.setLength(12);
    r.setBreadth(8);

    Cuboid c;
    c.setLength(6);
    c.setBreadth(6);
    // c.setHeight(6);
    c.setHeight(8);

    //for rectangle
    cout<<"# RECTANGLE"<<endl;
    cout<<"Length: "<<r.getLength()<<endl;
    cout<<"Breadth: "<<r.getBreadth()<<endl;
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;

    if(r.isSquare())
    {
        cout<<"YES! It is a SQUARE!"<<endl;
    }
    else
    {
        cout<<"NOT a SQUARE"<<endl;
    }
    cout<<endl;

    cout<<"# CUBOID"<<endl;
    cout<<"Length: "<<c.getLength()<<endl;
    cout<<"Breadth: "<<c.getBreadth()<<endl;
    cout<<"Height: "<<c.getHeight()<<endl;
    cout<<"Volume: "<<c.Volume()<<endl;
    if(c.isCube())
    {
        cout<<"YES! It is a CUBE!"<<endl;
    }
    else
    {
        cout<<"NOT a CUBE"<<endl;
    }
    cout<<endl;

    return 0;
}


// ALL CLasses DESCRIBED
// rectangle class
// Rectangle::Rectangle(int l=0,int b=0)
// {
//     length=l;
//     breadth=l;
// }

void Rectangle::setLength(int l)
{
    length=l;
}

void Rectangle::setBreadth(int b)
{
    breadth=b;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getBreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*(length+breadth);
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
        cout<<"Rectangle Destroyed!"<<endl;
}