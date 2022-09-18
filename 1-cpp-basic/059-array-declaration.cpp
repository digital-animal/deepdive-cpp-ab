#include<iostream>
using namespace std;

int main()
{
    int A[]={4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    //int n=sizeof(A)/sizeof(A[0]);
    int n=sizeof(A)/sizeof(int);
    cout<<"size of A: "<<n<<endl;

    cout<<"using for loop:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;

    cout<<"using for each loop:"<<endl;
    for(int x:A)
    {
        cout<<x<<" ";
    }

    cout<<endl<<endl;
    int arr[5] = {4, 9};
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(int i=0;i<(sizeof(arr)/sizeof(int));i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}