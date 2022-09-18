#include<iostream>
using namespace std;

int main()
{
    /// displacement due to acceleration
    float u,v,a;
    float s;
    cout<<"Enter initial velocity> ";
    cin>>u;
    cout<<"Enter final velocity> ";
    cin>>v;
    cout<<"Enter acceleration> ";
    cin>>a;

    s=(v*v-u*u)/(2*a);

    cout<<"Total displacement: "<<s<<endl;

    return 0;
}