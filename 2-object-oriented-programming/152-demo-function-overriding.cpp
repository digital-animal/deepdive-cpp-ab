#include<iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout<<"from Base class"<<endl;
    }
};

class Derived:public Base
{
public:
    void display()
    {
        cout<<"from Derived class"<<endl;
    }
};
int main()
{
    Derived d;
    d.display(); // function overriding
    d.Base::display();
    return 0;
}