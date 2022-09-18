#include<iostream>
using namespace std;

int main()
{
    int i=1;
    while(true)
    {
        cout<<i++<<" ";
        if(i>20) break;
    }
    cout<<endl;
    
    return 0;
}
