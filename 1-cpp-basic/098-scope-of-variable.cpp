#include<iostream>
using namespace std;
int g=5;

void fun()
{
    int g=10; // local to fun
    g++; // changing the immediate local g, not the global g
    {
        int g=20; // local to inner block
        cout<<"[inside inner block of fun()] -> g = "<<++g<<endl;
    }
    cout<<"[inside outer block of fun()] -> g = "<<g<<endl;
}

int main()
{
    cout<<"[inside main() block-before fun() call] -> g = "<<g<<endl;
    fun();
    cout<<"[inside main() block-after fun() call] -> g = "<<g<<endl;

    return 0;
}