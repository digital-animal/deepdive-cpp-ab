#include<iostream>
using namespace std;
class Parent
{
private:
    int a;
protected:
    int b;
public:
    int c;
    void change()
    {
        a=10;
        b=20;
        c=30;
    }
};

class Child:public Parent
//class Child:protected Parent
//class Child:private Parent
{
public:
    void modify()
    {
        // a=15;
        b=25;
        c=35;
    }
};

class GrandChild:public Child
{
public:
    void mutation()
    {
        // a=19;
        b=37;
        c=71;
    }
};

int main()
{

    Parent p;
    // p.a=101;
    // p.b=102;
    // p.c=103;


    Child c1;
    // c1.a=101;
    // c1.b=102;
    c1.c=103;

    GrandChild g;
    // g.a=101;
    // g.b=102;
    g.c=103;

    return 0;
}