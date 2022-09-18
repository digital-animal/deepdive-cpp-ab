#include<iostream>
using namespace std;

class Car // abstract class i.e. interface
{
public:
    virtual void start()=0; // pure virtual function
    virtual void stop()=0; // pure virtual function
};

class Suzuki:public Car
{
public:
    void start()
    {
        cout<<"Suzuki Started"<<endl;
    }
    void stop()
    {
        cout<<"Suzuki Stopped"<<endl;
    }
};


int main()
{
    // Car s; // invalid, abstract type variable,object cannot be created
    Car *s; // abstract type pointer can be created
    s = new Suzuki();
    s->start();
    s->stop();
    cout<<endl;

    delete s;

    return 0;
}