#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        length=l;
    }
    void setBreadth(int b)
    {
        breadth=b;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};

int main()
{
    int L,B;
    Rectangle r;
    cout<<"Enter length and breadth of the rectangle: ";
    cin>>L>>B;
    r.setLength(L);
    r.setBreadth(B);
    int A=r.area();
    int P=r.perimeter();
    cout<< "Length: " << r.getLength() <<endl;
    cout<< "Breadth: " << r.getBreadth() <<endl;
    cout<< "Area: " << A <<endl;
    cout<< "Perimeter: " << P <<endl;

    return 0;
}