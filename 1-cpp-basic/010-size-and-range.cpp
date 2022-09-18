#include<iostream>
#include<climits>
using namespace std;

int main()
{
    char w;
    int x;
    long y;
    float z;
    double p;
    long double q;
    long long r;
    bool s;
    cout<<"CHAR_MIN = " << CHAR_MIN<<endl;
    cout<<"CHAR_MAX = " << CHAR_MAX<<endl;
    cout<<"UCHAR_MAX = " << UCHAR_MAX<<endl;
    cout<<"INT_MIN = "<<INT_MIN<<endl;
    cout<<"INT_MAX = "<<INT_MAX<<endl;
    cout<<"UINT_MAX = "<<UINT_MAX<<endl;
    cout<<"LONG_MIN = "<<LONG_MIN<<endl;
    cout<<"LONG_MAX= "<<LONG_MAX<<endl;
    cout<<"LONG_LONG_MIN = "<<LONG_LONG_MIN<<endl;
    cout<<"LONG_LONG_MAX = "<<LONG_LONG_MAX<<endl;
    cout<<"ULONG_LONG_MAX = "<<ULONG_LONG_MAX<<endl;
    cout<<endl;
    cout<<sizeof(w)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(z)<<endl;
    cout<<sizeof(p)<<endl;
    cout<<sizeof(q)<<endl;
    cout<<sizeof(r)<<endl;
    cout<<sizeof(s)<<endl;

    return 0;
}