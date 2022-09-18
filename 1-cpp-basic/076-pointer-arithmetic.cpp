#include<iostream>
using namespace std;

int main()
{
    int A[5] = {4, 9, 2, 3, 5};
    int *p;
    // p=&A[0];
    p=A; // equivalent to p=&A[0]

    cout<<p<<endl;
    cout<<p+3<<endl;
    cout<<*p<<endl;
    cout<<*(p+3)<<endl;

    for(int i=0;i<5;i++)
    {
        //cout<<A[i]<<" ";
        //cout<<p[i]<<" ";
        //cout<<*(p+i)<<" ";
        //cout<<*(A+i)<<" ";
        cout<<*p++<<" ";
        //cout<<p++<<" ";
        // cout<<p+i<<" ";
    }
    cout<<endl;

    return 0;
}