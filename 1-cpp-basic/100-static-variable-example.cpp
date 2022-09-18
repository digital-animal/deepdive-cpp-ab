#include<iostream>
using namespace std;

int v=0;

void fun()
{
    static int v=0;
    int a=5;
    // static int a=5;
    v++;
    cout<<"a = "<< a <<"\t"<<"v = "<<v<<endl;
    a--;
}

int main()
{
    fun();
    fun();
    fun();
    fun();

    return 0;
}
