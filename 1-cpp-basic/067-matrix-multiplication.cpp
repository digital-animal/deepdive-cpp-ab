#include<iostream>
using namespace std;
int main()
{
    int A[2][2] = {{1,2},{3,4}};
    // int B[2][2] = {{1,2},{-1,0}};
    int B[2][2] = {{1,0},{0,1}};
    int M[2][2] = {{0,0},{0,0}};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                M[i][j]=M[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    cout<<"A x B "<<endl;
    for(auto &x:M)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}