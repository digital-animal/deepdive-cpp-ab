#include<iostream>
using namespace std;


int maxima(int a=0,int b=0,int c=0)
{
    return (a>b && a>c) ? a : (b > c ? b : c);
}

int main()
{
    cout<<maxima()<<endl;
    cout<<maxima(4)<<endl;
    cout<<maxima(4,9)<<endl;
    cout<<maxima(4,9,12)<<endl;

    return 0;
}