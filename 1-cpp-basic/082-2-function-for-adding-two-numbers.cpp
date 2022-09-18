#include<iostream>
using namespace std;

void add(int x,int y)
{
    int z=x+y;
    cout<<x<<" + "<<y<<" = "<<z<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers> ";
    cin>>a>>b;
    add(a,b);

    return 0;
}
