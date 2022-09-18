#include<iostream>
using namespace std;

/// reverse number
int reverseNum(int num)
{
    int i=0;
    int sum=0;
    int rem;
    while(num)
    {
        rem = num%10; // y
        sum=10*sum+rem; // x = 10x+y
        num = num/10;
    }
    return sum;
}


/// counting digits
int countDigit(int num)
{
    int counter=0;
    while(num)
    {
        counter++;
        num=num/10;
    }
    return counter;
}

/// printing digits
void printDigits(int num)
{
    int n = countDigit(num);

    int arr[n];
    int i=0;
    int rem;
    while(num)
    {
        rem = num%10;
        arr[i++] = rem;
        num = num/10;
    }
    i--;

    cout<<"digits are: ";
    for(int k=i;k>=0;k--)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

/// sum of digits
int sumOfDigits(int num)
{
    int i=0;
    int sum=0;
    int rem;
    while(num)
    {
        rem = num%10;
        sum+=rem;
        num = num/10;
    }
    return sum;
}

/// check palindrome

bool checkPalindrome(int num)
{
    int reversed_num = reverseNum(num);
    if(reversed_num == num)
        return true;
    else
        return false;
}

/// main function
int main()
{
    int num;
    cout<<"Enter a number> ";
    cin>>num;
    cout<<"digit count: "<<countDigit(num)<<endl;
    printDigits(num);
    cout<<"summation of digits: "<<sumOfDigits(num)<<endl;
    cout<<"reversed number: "<<reverseNum(num)<<endl;
    if(checkPalindrome(num))
        cout<<"Yes, Palindrome"<<endl;
    else
        cout<<"Not a Palindrome"<<endl;

    return 0;
}
