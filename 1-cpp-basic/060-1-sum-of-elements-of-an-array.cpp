#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    int n=sizeof(arr)/sizeof(int);

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    cout<<"Summation: "<<sum<<endl;

    return 0;
}
