#include<iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {
        cout<<"fun1 of Base Class to achieve re-usability of code!"<<endl;
    }
    virtual void fun2()=0; // pure virtual function to achieve polymorphism
    // thus this function MUST be overridden in derived class
};

class Derived:public Base
{
public:
    virtual void fun2()
    {
        cout<<"Overriding pure virtual function of Base Class in Derived Class!"<<endl;
    }
};

int main()
{
    // Base b; // invalid
    Base *p; // valid
    p = new Derived();
    p->fun2();
    cout<<endl;

    Derived d;
    d.fun1();
    d.fun2();
    cout<<endl;

    delete p;

    return 0;
}