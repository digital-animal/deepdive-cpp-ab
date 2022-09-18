#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
