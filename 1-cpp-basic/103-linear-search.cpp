#include<iostream>
using namespace std;

// int Search(int B[], int k, int n)
void Search(int *B, int key, int n)
{
    for(int i=0;i<n;i++)
    {
        // if(B[i] == k)
        if(*(B+i) == key)
        {
            cout<<key<<" found at index "<<i<<endl;
            // return;
            exit(0);
        }
    }
    cout<<key<<" not found!"<<endl;
}

int main()
{
    int A[] = {4, 9, 2, 3, 5, 7, 8, 1, 6, 0};
    int n = sizeof(A) / sizeof(int);
    int key;
    cout<<"Enter a key to search for: ";
    cin>>key;
    Search(A, key, n);

    return 0;
}
