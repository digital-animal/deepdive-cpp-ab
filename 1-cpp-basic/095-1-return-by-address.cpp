#include<iostream>
using namespace std;

int * func()
{
    cout<<"# inside func()"<<endl;
    int *p=new int[5];
    int *q = p; // saving for later use
    for(int i=0;i<5;i++)
    {
        *(p+i)=5*(i+1); // 5 10 15 20 25
    }
    cout<<p<<endl;

    while (*q)
    {
        cout<<*q++<<" ";
    }
    cout<<endl;

    return p;
}

int main()
{
    int *q=func();
    cout<<endl;

    cout<<"# inside main()"<<endl;
    cout<<q<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(q+i)<<" ";
    }
    cout<<endl;
    
    return 0;
}

