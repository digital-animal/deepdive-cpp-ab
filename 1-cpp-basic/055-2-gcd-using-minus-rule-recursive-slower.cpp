#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==b) return a;
    else if(a>b) return gcd(a-b, b);
    else return gcd(a, b-a);
}

int main()
{
    int x,y;
    cout<<"Enter two numbers> ";
    cin>>x>>y;
    cout<<"GCD of "<<x<<" & "<<y<<" : "<<gcd(x,y)<<endl;

    return 0;
}