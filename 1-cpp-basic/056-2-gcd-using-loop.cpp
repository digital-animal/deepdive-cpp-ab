#include<iostream>
using namespace std;

int GCD(int a,int b)
{
    int gcd=1;
    int x=1;
    int limit=(a<b?a:b);
    //cout<<limit<<endl;

    for(int i=1;i<=limit;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}

int main()
{
    int x,y;
    cout<<"Enter two numbers> ";
    cin>>x>>y;

    cout<<"GCD of "<<x<<" & "<<y<<" : "<<GCD(x,y)<<endl;

    return 0;
}


