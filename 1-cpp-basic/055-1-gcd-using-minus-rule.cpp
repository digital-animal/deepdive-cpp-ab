#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two numbers> ";
    cin>>x>>y;
    int p=x; // saving original value of x
    int q=y; // saving original value of y
    while(x!=y)
    {
        if(x>y) x=x-y;
        else if(x<y) y=y-x;
    }

    cout<<"GCD of "<<p<<" & "<<q<<" : "<<x<<endl;

    return 0;
}
