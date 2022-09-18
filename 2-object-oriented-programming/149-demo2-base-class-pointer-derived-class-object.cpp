#include<iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {
        cout<<"Rectangle area()"<<endl;
    }
};

class Cuboid:public Rectangle
{
public:
    void volume()
    {
        cout<<"Cuboid volume()"<<endl;
    }
};

int main()
{
    Rectangle r;
    r.area();
    // r.volume(); // INVALID
    cout<<endl;

    Cuboid c;
    c.area();
    c.volume();
    cout<<endl;

    Rectangle *pr;
    // pr = &c; //in Stack
    pr = new Cuboid(); //in Heap
    pr->area();
    // pr->volume(); // INVALID
    cout<<endl;

    Cuboid *pc;
    // pc = &r; // INVALID
    // pc = &c; // VALID, in stack
    pc = new Cuboid(); // VALID, in heap
    pc->area();
    pc->volume();
    cout<<endl;

    delete pr;
    delete pc;

    return 0;
}