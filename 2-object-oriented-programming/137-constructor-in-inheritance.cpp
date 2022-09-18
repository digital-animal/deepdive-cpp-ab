#include<iostream>
using namespace std;

class Base
{
private:
    int a;
public:
    Base()
    {
        cout<<"# Default Constructor of Base Class"<<endl;
    }
    Base(int b)
    {
        cout<<"# Parameterized Constructor of Base Class "<<b<<endl;
    }
};

class Derived:public Base
{
private:
    int c;
public:
    Derived()
    {
        cout<<"# Default Constructor of Derived Class"<<endl;
    }
    Derived(int e)
    {
        cout<<"# Parameterized Constructor of Base Class "<<e<<endl;
    }
    Derived(int e, int f):Base(f) // Derived(int f, int e):Base(f) alike super() in java
    {
        cout<<"# Dual Parameterized Constructor of Base Class "<<e<<endl;
    }
};

int main()
{
    // Base b1;
    // Base b2(5);
    // Derived d1;
    // Derived d2(10);
    Derived d(35,7);

    return 0;
}