#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    //setters i.e. mutators
    void setLength(int l)
    {
        l>0?length=l:length=0;
    }

    void setBreadth(int b)
    {
        b>0?breadth=b:breadth=0;
    }

    //getter i.e. accessors
    int getLength()
    {
        return length;
    }

    int getBreadth()
    {
        return breadth;
    }

    //methods
    int area()
    {
        int A=length*breadth;
        return A;
    }
    int perimeter()
    {
        int P=2*(length+breadth);
        return P;
    }
};

int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(20);
    cout<< "Length: " << r.getLength() << endl << "Breadth: " << r.getBreadth() <<endl;
    cout<< "Area: " << r.area() <<endl << "Perimeter: " << r.perimeter() <<endl;

    return 0;
}