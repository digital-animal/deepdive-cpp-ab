#include<iostream>
using namespace std;

unsigned long int gcd(unsigned long int a, unsigned long int b)
{
    if(a==0) return b;
    else if(b==0) return a;
    else if(a>b) return gcd(a%b, b);
    else return gcd(a, b%a);
}

int main()
{
    unsigned long int x,y;
    cout<<"Enter two numbers> ";
    cin>>x>>y;
    cout<<"GCD of "<<x<<" & "<<y<<" : "<<gcd(x,y)<<endl;

    return 0;
}