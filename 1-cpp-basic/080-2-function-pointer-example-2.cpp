#include<iostream>
using namespace std;

int maxima(int x,int y)
{
    return x>y?x:y;
}

int minima(int x,int y)
{
    return x<y?x:y;
}

int main()
{
    // function pointer that points to a function that takes two int args and returns an integer
    int (*fp)(int,int);
    fp=maxima;
    // int z=(*fp)(4,9);
    int z=fp(4,9);
    cout<<"maxima: "<<z<<endl;

    fp=minima;
    // int w=(*fp)(13,29);
    int w=fp(13,29);
    cout<<"minima: "<<w<<endl;

    return 0;
}