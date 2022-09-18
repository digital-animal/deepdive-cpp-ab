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
    int num;
    cout<<"Enter a number> ";
    cin>>num;

    if(checkPalindrome(num))
    {
        cout<<num<<" is palindrome"<<endl;
    }
    else
    {
        cout<<num<<" is not palindrome"<<endl;
    }

    return 0;
}