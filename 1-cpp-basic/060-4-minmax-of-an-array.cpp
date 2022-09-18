#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    
    int arr[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    int n=sizeof(arr)/sizeof(int);

    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"Minima: "<<min<<endl;
    cout<<"Maxima: "<<max<<endl;

    return 0;
}

