#include<iostream>
using namespace std;

int reverseNum(int num)
{
    int rem;
    int result=0;
    while(num)
    {
        rem = num%10;
        result=10*result+rem;
        num=num/10;
    }
    return result;
}

bool checkPalindrome(int num)
{
    if(num==reverseNum(num))
        return true;
    return false;
}

int main()
{
   
    int upper_bound;
    cout<<"# Palindrome Series" <<endl;
    cout<<"enter upper bound> ";
    cin>>upper_bound;

    for(int i=1;i<=upper_bound;i++)
    {
        if(checkPalindrome(i))
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}