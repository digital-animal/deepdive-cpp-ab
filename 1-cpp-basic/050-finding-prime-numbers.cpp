#include<iostream>
#include<math.h>
using namespace std;


bool checkPrime(int n)
{
    int ulimit = sqrt(n);
    for(int i=2;i<=ulimit;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter upper bound> ";
    cin>>n;

    cout<<"Prime numbers up to "<<n<<" are: "<<endl;
    for(int i=2;i<=n;i++)
    {
        if(checkPrime(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}

