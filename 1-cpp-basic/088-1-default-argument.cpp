#include<iostream>
using namespace std;

int add(int x,int y,int z=0,int w=0)
{
    return x+y+z+w;
}

int main()
{
    int c=add(8,12);
    int d=add(8,4,12);
    int e=add(4,8,12,16);
    int s=add(c,d,e);

    cout<<"c = "<<c<<endl;
    cout<<"d = "<<d<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"s = "<<s<<endl;

    return 0;
}

