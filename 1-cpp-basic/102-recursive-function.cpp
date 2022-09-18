#include<iostream>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        // cout<<n<<" ";
        fun(n-1);
        cout<<n<<" ";
    }
}

int main()
{
    int x=5;
    fun(x);
    cout<<endl;

    return 0;
}
