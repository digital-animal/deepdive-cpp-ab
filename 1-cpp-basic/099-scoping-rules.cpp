#include<iostream>
using namespace std;
int x=10;

int main()
{
    int x=20;
    // inner block
    {
        int x=30;
        cout<<"x = "<<x<<" (inner block)"<<endl;
    }
    cout<<"x = "<<x<<" (outer block)"<<endl;
    cout<<"x = "<<::x<<" (global)"<<endl; // global scope ::x

    return 0;
}