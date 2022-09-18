#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter number of elements> ";
    cin>>size;
    int *p;
    p=new int[size];
    cout<<p<<endl<<endl;
    // some code

    delete []p;

    cout<<"Enter new size> ";
    cin>>size;
    p=new int[size];
    cout<<p<<endl;

    delete []p;
    // p=NULL; // for c
    p=nullptr; // for c++
    cout<<p<<endl;

    return 0;
}