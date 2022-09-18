#include<iostream>
using namespace std;

int main()
{
    int a=10,b=5;
    
    if(true)
    {
        int c=a+b; // scope of c limited inside if block
        cout<<"# inside if block:"<<endl;
        cout<<"c = "<<c<<endl;
    }

    // dummy block to limit the scope of a variable
    // to a particular block
    {
        int c=a+b; // scope of c limited inside if dummy block
        if(c>10)
        {
            // cout<<++c<<endl;
            cout<<"# inside dummy block:"<<endl;
            cout<<"c = "<<++c<<endl;
        }
    }
    // cout<<c<<endl; // invalid, c is out of block level scope

    // expression inside if
    if(int c=a+b;c>10) /// for c++17
    {
        // cout<<++c<<endl;
        cout<<"# inside if block (c++17):"<<endl;
        cout<<"c = "<<++c<<endl;
    }

    return 0;
}

