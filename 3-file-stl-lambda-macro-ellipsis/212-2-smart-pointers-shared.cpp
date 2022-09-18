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
    // SHARED POINTER

    // object of Rectangle in HEAP using shared_ptr
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<"Area I: "<<ptr->area()<<endl;
    cout<<"Perimeter I: "<<ptr->perimeter()<<endl;

    shared_ptr<Rectangle> ptr2;
    ptr2=ptr;//ptr2 pointer is also now pointing to rectangle obj
    //together with ptr...sharing
    cout<<"Area II: "<<ptr2->area()<<endl;
    cout<<"Perimeter II: "<<ptr2->perimeter()<<endl;
    cout<<ptr.use_count()<<endl;

    shared_ptr<Rectangle> ptr3;
    ptr3=ptr2;
    cout<<"Area III: "<<ptr3->area()<<endl;
    cout<<"Perimeter III: "<<ptr3->perimeter()<<endl;
    cout<<ptr.use_count()<<endl;

    cout<<"Area I: "<<ptr->area()<<endl;
    cout<<"Perimeter I: "<<ptr->perimeter()<<endl;

    return 0;
}
