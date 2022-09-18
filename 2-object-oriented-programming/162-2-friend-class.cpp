#include<iostream>
using namespace std;

class Change; // class declaration prototype

class Test
{
private:
    int a=5;
protected:
    int b=10;
public:
    int c=15;
    
    friend Change;
};


class Change
{
public:
    Test t1;
    void mutate()
    {
        t1.a=11;
        t1.b=19;
        t1.c=31;

        cout<<t1.a<<endl;
        cout<<t1.b<<endl;
        cout<<t1.c<<endl;
    }
};

int main()
{
    Change c;
    c.mutate();

    return 0;
}