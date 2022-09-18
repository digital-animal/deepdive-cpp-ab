#include<iostream>
using namespace std;

int main()
{
    int a=15, b=7, i=5;

//    if(a>b && ++i<b)
//    {
//    }

    if(a>b || ++i<b)
    {
    }
    cout<<"i = "<<i<<endl; // i = 5, second conditional not evaluated

    return 0;
}
