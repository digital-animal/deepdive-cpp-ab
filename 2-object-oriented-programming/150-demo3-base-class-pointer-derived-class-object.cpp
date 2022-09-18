#include<iostream>
using namespace std;

class Vehicle
{
public:
    void start()
    {
        cout<<"Vehicle Started"<<endl;
    }
};

class Car:public Vehicle
{
public:
    void accelerate()
    {
        cout<<"Car Accelerating"<<endl;
    }
};

int main()
{
    Vehicle v;
    v.start();
    // v.accelerate(); // invalid
    cout<<endl;

    Car c;
    c.start();
    c.accelerate();
    cout<<endl;

    Vehicle *pv;
    // pv = &c; // in stack
    pv = new Car(); // in heap
    pv->start();
    // pv->accelerate(); // invalid
    cout<<endl;

    Car *pc;
    // pc = &v; // invalid
    pc = &c; // valid, in stack
    pc = new Car(); // valid, in heap
    pc->start();
    pc->accelerate(); 
    cout<<endl;

    delete pv;
    delete pc;

    return 0;
}