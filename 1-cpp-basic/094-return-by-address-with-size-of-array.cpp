#include<iostream>
#include<ctime>
using namespace std;

int * func(int n)
{
    int *p;
    p=new int[n];

    // population
    for(int i=0;i<n;i++)
    {
        // p[i]=4*i+3;
        // *(p+i)=4*i+3;
        // *(p+i) = rand() % 10;
        *(p+i) = rand() % 100;
    }
    
    return p; // returns address
}

int main()
{
    srand(time(NULL));

    int *q, *r, *s;
    q=func(10);
    r = q; // saving for later use
    s = q; // saving for later use

    // no garbage value, safer, pointer not shifted
    for(int i=0;i<10;i++)
    {
        cout<<q[i]<<" ";
        //cout<<*(q+i)<<" ";
    }
    cout<<endl;

    // no garbage value, safer, pointer shifter to last
    int i=0;
    while(i<10)
    {
        cout<<*q++<<" ";
        i++;
    }
    cout<<endl;

    // one garbage value
    while(*r)
    {
        cout<<*r++<<" ";
    }
    cout<<endl;

    // no garbage value
    while(*(s+1))
    {
        cout<<*s++<<" ";
    }
    cout<<endl;

    return 0;
}