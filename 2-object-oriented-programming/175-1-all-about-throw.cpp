#include<iostream>
using namespace std;

int division(int a,int b) noexcept(false)
{
    if(b==0)
       throw 101;
    return a/b;
}

int main()
{
    int x=10,y=0,z;
    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"DivisionByZeroError."<<endl<< e <<endl;
    }
    //Quality assurance
    cout<<"Program Successfully Executed!"<<endl;

    return 0;
}