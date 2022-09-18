#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:

    Rectangle();
    Rectangle(int l,int b);
    Rectangle(Rectangle &rect);
    void setLength(int l);
    void setBreadth(int b);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();

};

int main()
{
    Rectangle r;
    int L,B;
    cout<<"Enter length of the rectangle: ";
    cin>>L;
    cout<<"Enter breadth of the rectangle: ";
    cin>>B;
    r.setLength(L);
    r.setBreadth(B);
    cout<<"Length: "<<r.getLength()<<endl;
    cout<<"Breadth: "<<r.getBreadth()<<endl;
    int A=r.area();
    cout<<"Area: "<<A<<endl;
    int P=r.perimeter();
    cout<<"Perimeter: "<<P<<endl;

    if(r.isSquare())
    {
        cout<<"YES! It is a SQUARE!"<<endl;
    }
    else
    {
        cout<<"NOT a SQUARE"<<endl;
    }

    return 0;
}

// IMPLEMENTATION OF RECTANGLE CLASS
Rectangle::Rectangle()
{
    length=0;
    breadth=0;
}

Rectangle::Rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}

Rectangle::Rectangle(Rectangle &rect)
{
    length=rect.length;
    breadth=rect.breadth;

}

void Rectangle::setLength(int l)
{
    if(l>=0) length=l;
    else length=0;
}

void Rectangle::setBreadth(int b)
{
    if(b>=0) breadth=b;
    else breadth=0;
}

int Rectangle::area()
{
    int result=length*breadth;
    return result;
}

int Rectangle::perimeter()
{
    int result =2*(length+breadth);
    return result;
}

bool Rectangle::isSquare()
{
    return length==breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Destroyed!"<<endl;
}

