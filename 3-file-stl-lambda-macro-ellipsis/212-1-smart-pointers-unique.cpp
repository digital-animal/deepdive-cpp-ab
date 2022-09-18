#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }

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
    // UNIQUE POINTER
    // in STACK Memory
    Rectangle r1(10,20);//in stack
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Perimeter: "<<r1.perimeter()<<endl;

    // in HEAP memory
    Rectangle *r2=new Rectangle(10,20);
    cout<<"Area: "<<r2->area()<<endl;
    cout<<"Perimeter: "<<r2->perimeter()<<endl;

    // object of Rectangle in HEAP using unique_ptr
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));

    cout<<"Area: "<<ptr->area()<<endl;
    cout<<"Perimeter: "<<ptr->perimeter()<<endl;

    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr);//ptr2 pointer is now pointing to rectangle obj
    cout<<"Area II: "<<ptr2->area()<<endl;
    cout<<"Perimeter II: "<<ptr2->perimeter()<<endl;

    // checking whether ptr still points to rectangle object
    // No
    // ptr becomes null
    // it doesn't point to any object
    // so segmentation fault
    cout<<"Area II: "<<ptr->area()<<endl;
    cout<<"Perimeter II: "<<ptr->perimeter()<<endl;

    return 0;
}
