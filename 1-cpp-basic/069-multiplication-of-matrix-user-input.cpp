#include<iostream>
using namespace std;

int main()
{
    int A[2][2];
    int B[2][2];
    int M[2][2] = {0};

    // taking input
    cout<<"Enter elements of Matrix A(2 X 2): "<<endl;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cin>>y;
        }
    }
    cout<<endl;
    cout<<"Enter elements of Matrix B(2 X 2): "<<endl;
    for(auto &x:B)
    {
        for(auto &y:x)
        {
            cin>>y;
        }
    }
    cout<<endl;

    cout<<"Matrix A(2 X 2): "<<endl;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Matrix B(2 X 2): "<<endl;
    for(auto &x:B)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // multiplication of matrixA and matrixB
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                M[i][j] = M[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Matrix M = Matrix A x Matrix B "<<endl;
    for(auto &x:M)
    {
        for(auto &y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 0;
}