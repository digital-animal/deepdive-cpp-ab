#include<iostream>
using namespace std;

int main()
{
    int x=11, y=5;
    int a,b,c,d,e,f,g;
    // x=11(0000 1011)
    // y=5 (0000 0101)
    a=x&y;
    b=x|y;
    c=x^y;
    d=~x;
    e=~y;
    f=x<<2;
    g=y>>1;

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<endl;

    cout<<"x & y = "<< a << endl;
    cout<<"x | y = "<< b << endl;
    cout<<"x ^ y = "<< c << endl;
    cout<<"   ~x = "<< d << endl;
    cout<<"   ~y = "<< e << endl;
    cout<<" x<<2 = "<< f << endl;
    cout<<" y>>2 = "<< g << endl;

    return 0;
}
