#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x;

    cout<<"x = "<< x <<endl;
    cout<<"y = "<< y <<endl;
    cout<<"y++"<<endl;
    cout<<"x++"<<endl;
    x++; // increments both x and y
    y++; // increments both y and x
    cout<<"x = "<< x <<endl;
    cout<<"y = "<< y <<endl;
    cout<<"&x = "<< &x <<endl;
    cout<<"&y = "<< &y <<endl;

    return 0;
}