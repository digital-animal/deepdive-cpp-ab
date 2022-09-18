#include<iostream>
using namespace std;

class Test
{
public:
    void fun1()
    {
        cout<<"Inline"<<endl;
    }

    void fun2();
    inline void fun3();
};

int main()
{
    Test t1;
    t1.fun1();
    t1.fun2();
    t1.fun3();
    return 0;
}

void Test::fun2()
{
    cout<<"non-inline"<<endl;
}

void Test::fun3()
{
    cout<<"inline though described outside"<<endl;
}
