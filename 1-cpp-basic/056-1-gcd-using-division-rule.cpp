#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    int divisor;
    int dividend;
    int remainder;

    if(a>=b)
    {
        dividend = a;
        divisor = b;
    }
    else if(b>a)
    {
        dividend = b;
        divisor = a;
    }

    while(true)
    {
        remainder = dividend % divisor;
        if(remainder==0)
            return divisor;
        dividend=divisor;
        divisor=remainder;
    }

}

int main()
{
    int x,y;
    cout<<"Enter two numbers> ";
    cin>>x>>y;

    cout<<"GCD of "<<x<<" & "<<y<<" : "<<GCD(x,y)<<endl;

    return 0;
}