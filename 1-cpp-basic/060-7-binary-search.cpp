#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Given array:"<<endl;
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    int low_index=0;
    int high_index=n-1;

    int key;
    cout<<"Enter a key to search> ";
    cin>>key;

    while(low_index<=high_index)
    {
        int mid_index=(low_index+high_index)/2;
        if(key<arr[mid_index])
        {
            high_index=mid_index-1;
        }
        else if(key>arr[mid_index])
        {
            low_index=mid_index+1;
        }
        else if(key==arr[mid_index])
        {
            cout<<key<<" found at index "<<mid_index<<endl;
            exit(0);
        }
    }
    cout<<key<<" not found in the array."<<endl;
    return 0;
}


