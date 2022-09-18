#include<iostream>
using namespace std;

int main()
{
    cout<<"# Using for loop: "<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl;


    cout<<"# Using while loop: "<<endl;
    int i=1;
    while(i<=10)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<endl<<endl;

    cout<<"# Using do while loop: "<<endl;
    int k=1;
    do
    {
        cout<<k<<" ";
        k++;
    } while(k<=10);
    cout<<endl<<endl;

    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"# Using for each loop: "<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    return 0;
}
