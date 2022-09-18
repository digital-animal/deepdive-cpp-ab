#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    int n=sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter a key to search> ";
    cin>>key;

    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<key<<" found at index "<<i<<endl;
            exit(0);
        }
    }
    cout<<key<<" not found in the array."<<endl;
    return 0;
}

