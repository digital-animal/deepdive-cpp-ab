#include<iostream>
using namespace std;

int main()
{
    int x=10;
    int &y=x; // reference variable i.e. alias
    cout<<"x = "<< x <<endl;
    cout<<"y = "<< y <<endl;
    cout<<"x++"<<endl;
    x++;
    cout<<"x = "<< x <<endl;
    cout<<"y = "<< y <<endl;
    cout<<"y++"<<endl;
    y++;
    cout<<"x = "<< x <<endl;
    cout<<"y = "<< y <<endl;
    cout<<"&x = "<< &x <<endl;
    cout<<"&y = "<< &y <<endl;

    return 0;
}
