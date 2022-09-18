#include<iostream>
using namespace std;

int main()
{
    float basicSal;
    float allowPerc;
    float deductPerc;
    float netSalary;

    cout<<"Enter basic salary> ";
    cin>>basicSal;
    cout<<"Enter percentage of allowance> ";
    cin>>allowPerc;
    cout<<"Enter percentage of deduction> ";
    cin>>deductPerc;

    netSalary = basicSal + (basicSal*allowPerc)/100-(basicSal*deductPerc)/100;

    cout<<"Net Salary: "<<netSalary<<endl;

    return 0;
}
