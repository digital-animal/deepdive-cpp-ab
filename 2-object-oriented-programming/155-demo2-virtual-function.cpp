#include<iostream>
using namespace std;

class Vehicle
{
public:
    // void start()
    // {
    //     cout<<"Vehicle started"<<endl;
    // }

    virtual void start()
    {
        cout<<"Vehicle started"<<endl;
    }

};

class Car:public Vehicle
{
public:
    void start()
    {
        cout<<"Car started"<<endl;
    }

};

int main()
{
    Vehicle *ptr=new Car();
    ptr->start();

    delete ptr;

    return 0;
}