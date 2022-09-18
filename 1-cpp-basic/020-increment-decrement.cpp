#include<iostream>
using namespace std;

int main()
{
    cout<<"# Example 1"<<endl;
    int x=5, y=1;
    y=x+++x++; // y = ((x++)+x)++
    cout<<"x = "<<x<<", "<<"y = "<<y<<endl; // 7 11
    cout<<endl;

    cout<<"# Example 2"<<endl;
    x=5, y=1; // reinitialized
    y=++x + ++x + ++x; // y = ((++x) + (++x)) + (++x)
    cout<<"x = "<<x<<", "<<"y = "<<y<<endl; // 8 22
    cout<<endl;

    cout<<"# Example 3"<<endl;
    int i=5, j=1, k=1;
    j=2*++i + 2*i++; // j = (2*++i) + (2*i++) 
    cout<<"i = "<<i<<", "<<"j = "<<j<<endl; 
    cout<<endl;

    cout<<"# Example 4"<<endl;
    i=5, j=1, k=1;
    j=2*i++ + 2*i++;
    cout<<"i = "<<i<<", "<<"j = "<<j<<endl; 
    cout<<endl;

    cout<<"# Example 5"<<endl;
    i=5, j=1, k=1;
    k=2*j++ + 2*++j;
    cout<<"i = "<<i<<", "<<"j = "<<j<<", "<<"k = "<<k<<endl; 
    cout<<endl;

    return 0;
}

