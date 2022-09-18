#include<iostream>
using namespace std;

class Base
{
public:
    int x;
    void show()
    {
        cout<<x<<endl;
    }
};

class Derived:public Base
{
public:
    int y;
    void display()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Base b1;
    b1.x=25;
    b1.show();
    cout<<endl;

    Base *b2 = new Base();
    b2->x=25;
    b2->show();
    cout<<endl;

    Derived d1;
    d1.x=5;
    d1.y=20;
    d1.show();
    d1.display();
    cout<<endl;

    Derived *d2 = new Derived();
    d2->x=5;
    d2->y=20;
    d2->show();
    d2->display();
    cout<<endl;

    delete b2;
    delete d2;

    return 0;
}