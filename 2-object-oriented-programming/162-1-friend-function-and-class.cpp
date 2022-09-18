#include<iostream>
using namespace std;

class Test
{
private:
    int a=5;
protected:
    int b=10;
public:
    int c=15;
    
    friend void fun(); // friend, not member
};

/// friend function
void fun()
{
    Test t;
    cout<<t.a<<endl;
    cout<<t.b<<endl;
    cout<<t.c<<endl;
}


int main()
{
    fun();

    return 0;
}
