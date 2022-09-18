#include<iostream>
using namespace std;

int main()
{
    // int x=10,y=0,z;
    int x=10,y=2,z;

    try
    {
        if(y==0)
            throw 101; // error code
        z=x/y;
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"DivisionByZeroError."<<endl<<"Error Code: "<<e<<endl;
    }
    //Quality assurance
    cout<<"Program Successfully Executed!"<<endl;

    return 0;
}