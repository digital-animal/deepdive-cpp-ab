#include<iostream>
using namespace std;

#define PI 3.1416

float area(float r)
{
    return PI*r*r;
}

int main()
{
    float radius;
    cout<<"Enter radius of the circle> ";
    cin>>radius;

    cout<<"Area: "<<area(radius)<<endl;

    return 0;
}
