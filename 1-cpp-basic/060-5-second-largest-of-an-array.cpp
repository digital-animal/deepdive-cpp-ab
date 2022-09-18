#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int largest = INT_MIN;
    int second_largest = INT_MIN;
    // int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    // int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0, 9};
    int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0, 9, 8};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }


    cout<<"largest: "<< largest <<endl;
    cout<<"second largest: "<< second_largest <<endl;

    return 0;
}

