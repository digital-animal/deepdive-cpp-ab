#include<iostream>
using namespace std;

int main()
{
    int A[3][3]={{4, 9, 2},{3, 5, 7},{8, 1, 6}};
    // int B[3][3]={{3, 5, 7},{8, 1, 6},{4, 9, 2}};
    int B[3][3]={{1, 0, 0},{0, 1, 0},{0, 0, 1}};
    int C[3][3]={0};
    int D[3][3]={0};
    
    cout<<"Matrix A "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Matrix B "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // matrix addition
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }

    cout<<"Matrix C = Matrix A + Matrix B "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    // matrix multiplication
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                D[i][j] = D[i][j] + A[i][k]*B[k][j];
            }
        }
    }

    cout<<"Matrix D = Matrix A x Matrix B "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}