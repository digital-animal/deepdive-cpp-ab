#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"fun1 of Base class"<<endl;
    }
};

class Derived:public Base
{
public:
    void fun2()
    {
        cout<<"fun2 of Derived class"<<endl;
    }
};

int main()
{
    Base b1;
    b1.fun1();
    // b1.fun2(); // Not possible
    cout<<endl;

    Derived d1;
    d1.fun1();
    d1.fun2();
    cout<<endl;

    Base *p1;
    // p1 = &d1;//in STACK memory
    p1 = new Derived(); //alternative of previous line, in HEAP Memory
    p1->fun1();
    // p1->fun2(); // Not possible as p1 is base class pointer
    cout<<endl;

    delete p1;

    return 0;
}