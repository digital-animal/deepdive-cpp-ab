#include<iostream>
using namespace std;

int & fun(int &x)
{
    return x; /// x is reference to a i.e. &x=a
    // this function returns reference to a
}

int main()
{
    int a=10;
    int b=fun(a); /// so fun(a)=a... &x=a
    cout<<b<<endl;
    fun(b)=25; /// fun(b)=b...&x=b
    cout<<b<<endl;
    
    return 0;
}

