#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    // constructor with default value
    Rectangle(int l=0,int b=0)
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
    cout<<"# using default constructor (stack)"<<endl;
    Rectangle r1; // using default constructor
    cout<<"Length: "<< r1.getLength() <<endl;
    cout<<"Breadth: "<< r1.getBreadth() <<endl;
    cout<<"Area: "<< r1.area() <<endl;
    cout<<"Perimeter: "<< r1.perimeter() <<endl;
    cout<<endl;

    cout<<"# using default(parameterized) constructor (stack)"<<endl;
    Rectangle r2(4, 9); // using default(parameterized) constructor
    cout<<"Length: "<< r2.getLength() <<endl;
    cout<<"Breadth: "<< r2.getBreadth() <<endl;
    cout<<"Area: "<< r2.area() <<endl;
    cout<<"Perimeter: "<< r2.perimeter() <<endl;
    cout<<endl;

    cout<<"# using default(parameterized) constructor (heap)"<<endl;
    Rectangle *r3 = new Rectangle(4,9); // using default(parameterized) constructor
    cout<<"Length: "<< r3->getLength() <<endl;
    cout<<"Breadth: "<< r3->getBreadth() <<endl;
    cout<<"Area: "<< r3->area() <<endl;
    cout<<"Perimeter: "<< r3->perimeter() <<endl;
    cout<<endl;

    cout<<"# using copy constructor (stack)"<<endl;
    Rectangle rect1(r2); // using parameterized constructor
    cout<<"Length: "<< rect1.getLength() <<endl;
    cout<<"Breadth: "<< rect1.getBreadth() <<endl;
    cout<<"Area: "<< rect1.area() <<endl;
    cout<<"Perimeter: "<< rect1.perimeter() <<endl;
    cout<<endl;

    cout<<"# using copy constructor (heap)"<<endl;
    Rectangle *rect = new Rectangle(*r3); // using parameterized constructor
    cout<<"Length: "<< rect->getLength() <<endl;
    cout<<"Breadth: "<< rect->getBreadth() <<endl;
    cout<<"Area: "<< rect->area() <<endl;
    cout<<"Perimeter: "<< rect->perimeter() <<endl;

    return 0;
}



