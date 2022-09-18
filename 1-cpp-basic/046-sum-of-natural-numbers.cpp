#include<iostream>
using namespace std;

int main()
{
    int sum=0;
    int n;
    cout<<"Enter n> ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        sum+=i++;
    }
    cout<<"Summation of first "<<n<<" natural numbers = "<<sum<<endl;
    return 0;
}

