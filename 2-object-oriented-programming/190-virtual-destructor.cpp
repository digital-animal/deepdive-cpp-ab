#include<iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout<<"1.Base Constructor"<<endl;
    }
    
//    ~Base() //non-virtual function
//     {
//         cout<<"2.Base Destructor"<<endl;
//     }

    virtual ~Base() //virtual function
    {
        cout<<"2.Base Destructor"<<endl;
    }
};

class Derived:public Base
{
public:
    Derived()
    {
        cout<<"3.Derived Constructor"<<endl;
    }
    ~Derived()
    {
        cout<<"4.Derived Destructor"<<endl;
    }
};

void fun()
{
    // Derived d; //object in stack

    /// Derived class pointer, derived class object
    // Derived *ptr=new Derived(); //in heap
    // delete ptr; //releasing heap memory

    /// Base class pointer, derived class object
    Base *ptr=new Derived();//in heap
    delete ptr;//releasing heap memory

}

int main()
{
    fun();

    return 0;
}
