#include<iostream>
using namespace std;

int main()
{
    cout<<"# Pattern 1:"<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i+j<=5)
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"# Pattern 2:"<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<=4;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"# Pattern 3:"<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"# Pattern 4:"<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(j>=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"# Pattern 5:"<<endl;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i+j>=5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    cout<<"# Pattern 6:"<<endl;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i+j<=4)
                cout<<"* ";
        }
       cout<<endl;
    }
    cout<<endl<<endl;

    return 0;
}