#include<iostream>
using namespace std;

int main()
{
    int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    int n=sizeof(arr)/sizeof(int);

    int maxima = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxima)
        {
            maxima=arr[i];
        }
    }
    cout<<"Maxima: "<<maxima<<endl;

    return 0;
}

