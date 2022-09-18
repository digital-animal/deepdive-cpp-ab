#include<iostream>
#include<cstdarg>
using namespace std;

int sum(int n,...)
{
    va_list list;
    va_start(list,n);
    int s=0;
    for(int i=0;i<n;i++)
    {
        int x=va_arg(list,int);
        s+=x;
    }
    va_end(list);

    return s;
}
int main()
{
    cout<<sum(4,4,21,5,15)<<endl;
    cout<<sum(2,5,15)<<endl;

    return 0;
}
