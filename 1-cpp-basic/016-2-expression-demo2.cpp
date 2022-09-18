#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    /// root of quadratic equation
    int a,b,c;
    cout<<"Enter coefficients of the quadratic equation(a,b,c)> "<<endl;
    cin>>a>>b>>c;
    float root1, root2;
    int d;
    d=b*b-4*c*a;
    if(d>=0)
    {
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        cout<<"root1 = "<<root1<<endl;
        cout<<"root2 = "<<root2<<endl;
    }
    else
    {
        cout<<"complex root cannot be calculated "<<endl;
    }

    return 0;
} 