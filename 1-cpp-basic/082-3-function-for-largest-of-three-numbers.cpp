#include<iostream>
using namespace std;

int maxima(int x,int y, int z)
{
    if(x>y && x>z) return x;
    else if(y>z) return y;
    else return z;

}

int main()
{
    int a,b,c;
    cout<<"Enter three numbers> ";
    cin>>a>>b>>c;
    int m=maxima(a,b,c);
    cout<<"Maxima: "<<m<<endl;

    return 0;
}

