#include<iostream>
using namespace std;

template<typename T>
void fun(T q)
{
    q();
    q();
    q();
}

int main()
{
    [](){cout<<"Hello\n";}();
    auto f = [](){ cout<<"Hello\n";};
    f();

    [](int x, int y){ cout<< x+y <<endl;}(10,5);

    auto sum = [](int x, int y){ cout<< x+y <<endl;};
    sum(10,5);

    int s = [](int x,int y)->int{return x+y;}(5,7);
    cout<<s<<endl;

    cout<<([](int x,int y){return x+y;}(10,5))<<endl;

    int a = 10;
    int b = 20;

    // [,](){cout<<a<<" "<<b<<endl;}(); // invalid
    [a,b](){cout<<a<<" "<<b<<endl;}(); // valid
    // [a,b](){cout<<++a<<" "<<++b<<endl;}(); // invalid, as call by value is passed as const
    [&a,&b](){cout<<++a<<" "<<++b<<endl;}(); // valid, referencing so value changed
    [ & ](){cout<<++a<<" "<<++b<<endl;}(); // valid, referencing all variables in enclosing scope, so value changed
    auto z = [ & ](){cout<<++a<<" "<<++b<<endl;}; // valid, referencing so value changed
    fun(z);
    fun(z);

    return 0;
}