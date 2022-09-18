#include<iostream>
using namespace std;

void fun()
{
    int s=10;
    static int t=10;
    s++;
    t++;
    cout<<"s = "<<s<<"\t"<<"t = "<<t<<endl;
}

int main()
{
    fun();
    fun();
    fun();
    fun();
    fun();
    
    return 0;
}