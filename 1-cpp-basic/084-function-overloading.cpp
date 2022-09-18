#include<iostream>
using namespace std;

int max(int x,int y)
{
    return x > y? x: y;
}

int max(int x,int y,int z)
{
    if(x>y && x>z) return x;
    else if(y>z) return y;
    else return z;
}

int add(int x,int y)
{
    return x+y;
}
int add(int x,int y,int z)
{
    return x+y+z;
}
float add(float x,float y)
{
    return x+y;
}
int main()
{
    int a=12,b=7,c=13;
    float i=2.5f,j=3.6f;

    cout<< "max(" << a << "," << b << ") = " << max(a, b) <<endl;
    cout<< "max(" << a << "," << b << "," << c << ") = " << max(a, b, c) <<endl;
    cout<< "add(" << a << "," << b << ") = " << add(a, b) <<endl;
    cout<< "add(" << a << "," << b << "," << c << ") = " << add(a, b, c) <<endl;
    cout<< "add(" << i << "," << j << ") = " << add(i, j) <<endl;
    
    return 0;
}