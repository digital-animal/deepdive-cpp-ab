#include<iostream>
using namespace std;
int g=0;

void fun()
{
    int a=5;///local
    g=g+a;
    cout<<"inside fun()"<<endl;
    cout<<"a = "<<a<<endl;
    cout<<"g = "<<g<<endl;
}

int main()
{
    int x=10;///local
    fun();
    cout<<endl;
    g=15;
    fun();
    g++;
    cout<<endl;
    cout<<"inside main()"<<endl;
    cout<<"g = "<<g<<endl;
    cout<<endl;
    fun();

    return 0;
}
