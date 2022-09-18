#include<iostream>
using namespace std;

int main()
{
    int A[3][3]={{4, 9, 2},{3, 5, 7},{8, 1, 6}};
    int B[3][3]={{3, 5, 7},{8, 1, 6},{4, 9, 2}};

    cout<<"Matrix A "<<endl;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Matrix B "<<endl;
    for(auto &x:B)
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