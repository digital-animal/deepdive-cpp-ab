#include<iostream>
using namespace std;

class OuterClass
{
public:
    void fun()
    {
        i.display();
    }

    class InnerClass
    {
    public:
        void display()
        {
            cout<<"It is Inner Class."<<endl;
        }
    };
    InnerClass i;
};

int main()
{
    OuterClass::InnerClass j;
    j.display();

    OuterClass k;
    k.fun();

    return 0;
}