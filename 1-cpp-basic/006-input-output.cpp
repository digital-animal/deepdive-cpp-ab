#include<iostream>
using namespace std;

int main()
{
    int a, b, sum, sub, mul, div, mod;
    cout<<"Enter two numbers> ";
    cin>>a>>b;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    div= a/b;
    mod = a%b;

    cout<<a<<" + "<<b<<" = "<<sum<<endl;
    cout<<a<<" - "<<b<<" = "<<sub<<endl;
    cout<<a<<" x "<<b<<" = "<<mul<<endl;
    cout<<a<<" / "<<b<<" = "<<div<<endl;
    cout<<a<<" % "<<b<<" = "<<mod<<endl;

    return 0;
}