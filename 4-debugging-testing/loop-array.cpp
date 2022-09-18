#include<iostream>
using namespace std;

#define PI 3.1416
/// example 1
/*
int area(int r)
{
    int area;
    area = PI*r*r;
    return area;
}

int main()
{
    int radius;
    cout<<"Enter radius of the circle> ";
    cin>>radius;

    cout<<"Area: "<<area(radius)<<endl;

    return 0;
}
*/


int main()
{
    cout<<"Using for loop: ";
    for(int i=1;i<=10;i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Using while loop: ";
    int i=1;
    while(i<=10)
    {
        cout<<i<<" ";
        i++;
    }
    cout<<endl;

    cout<<"Using do while loop: ";
    int k=1;
    do
    {
        cout<<k<<" ";
        k++;
    }while(k<=10);
    cout<<endl;

    int arr[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"Using for each loop: ";
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
