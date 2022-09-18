#include<iostream>
using namespace std;

namespace First
{
    void fun()
    {
        cout<<"first function"<<endl;
    }
}
namespace Second
{
    void fun()
    {
        cout<<"second function"<<endl;
    }
}

using namespace First;
int main()
{
    fun();
    Second::fun();

    return 0;
}
