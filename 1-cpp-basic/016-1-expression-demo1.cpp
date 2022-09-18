#include<iostream>
#include<cmath>
using namespace std;
#define PI 3.1416

int main()
{
    /// area of circle
    float radius;
    float area;

    cout<<"Enter radius of the circle> ";
    cin>>radius;

    area = PI*pow(radius,2);
    cout<<"Area = "<<area<<endl;

    return 0;
}