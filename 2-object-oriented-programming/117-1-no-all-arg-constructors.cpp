#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    // non-parameterized constructor
    // user defined constructor
    Rectangle()
    {
        length=1;
        breadth=1;
    }
    
    // parameterized constructor
    Rectangle(int l,int b)
    {
        setLength(l);
        setBreadth(b);
    }

    // copy constructor
    Rectangle(Rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }

    // setter function for length
    void setLength(int l)
    {
        if(l>=0) length=l;
        else length=0;
    }
    // setter function for breadth
    void setBreadth(int b)
    {
        if(b>=0) breadth=b;
        else breadth=0;
    }

    //getter function for length
    int getLength()
    {
        return length;
    }

    //getter function for breadth
    int getBreadth()
    {
        return breadth;
    }
    //area method
    int area()
    {
        int result =length*breadth;
        return result;
    }
    //perimeter method
    int perimeter()
    {
        int result =2*(length+breadth);
        return result;
    }
};

int main()
{
    cout<<"# using non-parameterized constructor"<<endl;
    Rectangle r; // using default constructor
    cout<<"Length: "<< r.getLength() <<endl;
    cout<<"Breadth: "<< r.getBreadth() <<endl;
    cout<<"Area: "<< r.area() <<endl;
    cout<<"Perimeter: "<< r.perimeter() <<endl;
    cout<<endl;

    cout<<"# using parameterized constructor"<<endl;
    Rectangle *rect = new Rectangle(4, 9); // using parameterized constructor
    cout<<"Length: "<< r.getLength() <<endl;
    cout<<"Breadth: "<< r.getBreadth() <<endl;
    cout<<"Area: "<< rect->area() <<endl;
    cout<<"Perimeter: "<< rect->perimeter() <<endl;

    return 0;
} 




