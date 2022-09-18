#include<iostream>
using namespace std;

template<class T>
T maxima(T x,T y)
{
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
