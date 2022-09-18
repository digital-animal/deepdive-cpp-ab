#include<iostream>
using namespace std;

int main()
{
    int A[3][3];

    cout<<"# Enter elements of matrix A:"<<endl;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cin>>y;
        }
    }
    cout<<endl;

    cout<<"# Matrix A "<<endl;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}