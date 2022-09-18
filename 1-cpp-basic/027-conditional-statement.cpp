#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number> ";
    cin>>num;

    if(num%2==0)
    {
        cout<<num<<" is even"<<endl;
    }
    else if(num%2==1)
    {
        cout<<num<<" is odd"<<endl;
    }
    else
    {
        cout<<"Invalid input"<<endl;
        return -1;
//        exit(1);
    }
    return 0;
}
