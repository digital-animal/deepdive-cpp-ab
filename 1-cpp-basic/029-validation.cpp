#include<iostream>
using namespace std;

int main()
{
    int numerator, denominator;
    int quotient;
    int remainder;
    cout<<"Enter numerator> ";
    cin>>numerator;
    cout<<"Enter denominator> ";
    cin>>denominator;

    if(denominator==0)
    {
        cout<<"Invalid input"<<endl;
        cout<<"Division by zero error"<<endl;
        exit(1);
    }
    else
    {
        quotient = numerator/denominator;
        remainder = numerator%denominator;
    }

    cout<<"Quotient: "<<quotient<<endl;
    cout<<"Remainder: "<<remainder<<endl;

    return 0;
}
