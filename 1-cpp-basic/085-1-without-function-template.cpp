#include<iostream>
using namespace std;

int max(int x,int y)
{
    cout<<"max for integers"<<endl;
    if(x>y) return x;
    else return y;
}

float max(float x,float y)
{
    cout<<"max for floats"<<endl;
    if(x>y) return x;
    else return y;
}

double max(double x,double y)
{
    cout<<"max for doubles"<<endl;
    if(x>y) return x;
    else return y;
}

int main()
{
    int c=max(10,5);
    float d=max(11.5f,6.9f);
    double e=max(2.718281828459045,3.1459265689793);
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;

    return 0;
}
