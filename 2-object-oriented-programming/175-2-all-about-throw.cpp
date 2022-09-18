#include<iostream>
using namespace std;

class MyException:public exception
{
public:
    const char *what()
    {
        return "DivisionByZeroError";
    }

};

int division(int a,int b) noexcept(false)
{
    if(b==0)
        throw MyException();
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
    catch(MyException e)
    {
        cout<< e.what() <<endl;
    }
    //Quality assurance
    cout<<"Program Successfully Executed!"<<endl;

    return 0;
} 