#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int n;
    cout<<"How many elements? ";
    cin>>n;
    int A[n]={0}; // in stack

    for(int i=1;i<=n;i++)
    {
        cout<<"Enter element "<<i<<"> ";
        cin>>A[i];
    }

    float sum=0.0;
    for(int i=0;i<n;i++)
    {
       sum = sum + A[i];
    }
    cout<<"Summation = "<<sum<<endl;
    float average = sum/n;
    cout<<"Average = "<<average<<endl;

    return 0;
}