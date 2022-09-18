#include<iostream>
using namespace std;

class Test
{
    //inClass initializer
    int x=10;
    int y=20;
public:
    Test(int a,int b)
    {
        x=a;
        y=b;
    }

    // one constructor can call
    // another constructor
    // within a same class
    // this is Delegation of constructor
    Test():Test(1,1)
    {

    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Test t1;
    t1.print();

    Test t2(4,9);
    t2.print();

    return 0;
}
