#include<iostream>
using namespace std;

int main()
{
    int *p;
    p=new int[5];
    cout<<p<<endl;
    p[0]=4;
    p[1]=9;
    p[2]=2;
    p[3]=3;
    p[4]=5;
    for(int i=0;i<5;i++)
    {
        //cout<<p[i]<<endl;
        cout<<*(p+i)<<" ";
    }
    cout<<endl;

    delete []p;
    cout<<p<<endl;

    p=nullptr; // essential after deleting
    cout<<p<<endl;

    return 0;
}