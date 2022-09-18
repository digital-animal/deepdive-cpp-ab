#include<iostream>
using namespace std;

/// count digit
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


/// digit array
void digitInWord(int num)
{
    int n=countDigit(num);
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


    for(int k=i;k>=0;k--)
    {
        switch(arr[k])
        {
            case 1: cout<<"One ";
                break;
            case 2: cout<<"Two ";
                break;
            case 3: cout<<"Three ";
                break;
            case 4: cout<<"Four ";
                break;
            case 5: cout<<"Five ";
                break;
            case 6: cout<<"Six ";
                break;
            case 7: cout<<"Seven ";
                break;
            case 8: cout<<"Eight ";
                break;
            case 9: cout<<"Nine ";
                break;
            case 0: cout<<"Zero ";
                break;
        }
    }

}

int main()
{
    int num;
    cout<<"Enter a number> ";
    cin>>num;
    digitInWord(num);
    cout<<endl;

    return 0;
}
