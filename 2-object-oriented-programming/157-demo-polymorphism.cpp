#include<iostream>
using namespace std;

class Car // abstract class or interface
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

class Toyota:public Car
{
public:
    void start()
    {
        cout<<"Toyota Started"<<endl;
    }
    void stop()
    {
        cout<<"Toyota Stopped"<<endl;
    }
};

int main()
{
    Car *s;
    s=new Suzuki();
    s->start();
    s->stop();
    cout<<endl;

    s=new Toyota();
    s->start();
    s->stop();
    cout<<endl;

    Car *t;
    t=new Toyota();
    t->start();
    t->stop();
    cout<<endl;

    delete s;
    delete t;

    return 0;
}