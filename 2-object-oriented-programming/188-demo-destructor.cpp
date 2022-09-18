#include<iostream>
using namespace std;

class Demo
{
    int *q;
public:
    Demo()
    {
        q=new int[10]; //creating memory in heap
        cout<<"Constructor of Demo."<<endl;
    }
    ~Demo()
    {
        delete []q; //releasing memory
        cout<<"Destructor of Demo."<<endl;
    }
};

void fun()
{
//    Demo d; //in STACK
    Demo *p=new Demo(); //in heap
    delete p; //heap memory is freed
}

int main()
{
    fun();
    return 0;
}
