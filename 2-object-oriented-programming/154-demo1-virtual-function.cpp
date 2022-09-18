#include<iostream>
using namespace std;

class Base
{
public:
    // void fun()
    // {
    //     cout<<"function of Base class."<<endl;
    // }
    
    virtual void fun() // alike abstract method of java
    {
        cout<<"function of Base class."<<endl;
    }
};

class Derived:public Base
{
public:
    void fun()
    {
        cout<<"function of Derived class."<<endl;
    }
};

int main()
{
    Derived d;
    d.fun();
    d.Base::fun();
    cout<<endl;

    Base b;
    b.fun();
    cout<<endl;

    Base *ptr;
    // ptr = &d; // in STACK
    ptr = new Derived(); // in Heap Memory
    ptr->fun();
    cout<<endl;

    Derived *q;
    q = new Derived();
    q->fun();
    q->Base::fun();
    cout<<endl;

    delete ptr;
    delete q;

    return 0;
}