#include<iostream>
using namespace std;

class Test
{
public:
    int a;
    int b;

    static int count;

    Test()
    {
        a=10;
        b=20;
        count++;
    }

    static int getCount()
    {
        // a++; // invalid
        return count;
    }
};

int Test::count=0;

int main()
{
    cout<<Test::count<<endl;

    cout<<Test::getCount()<<endl;

    Test t1;
    cout<<t1.getCount()<<endl;

    Test t2;
    cout<<t2.getCount()<<endl;

    Test t3;
    t3.count=7;
    cout<<t3.getCount()<<endl;

    Test t4;
    cout<<t4.getCount()<<endl;

    return 0;
}