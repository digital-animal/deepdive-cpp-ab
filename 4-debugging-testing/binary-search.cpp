#include<iostream>
using namespace std;

void BinarySearch(int *A,int l,int r,int key)
{
    int mid=(l+r)/2;
    if(l<=r)
    {
        if(key<A[mid])
        {
            return BinarySearch(A,l,mid-1,key);
        }
        else if(key>A[mid])
        {
            return BinarySearch(A,mid+1,r,key);
        }
        else if(key==A[mid])
        {
            cout<<key<<" found at index "<<mid<<endl;
            return;
        }
    }
    cout<<key<<" not found in the array"<<endl;
}


int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n=sizeof(A)/sizeof(int);
    int key;
    cout<<"Enter a key to search> ";
    cin>>key;
    BinarySearch(A,0,n-1,key);

    return 0;
}


