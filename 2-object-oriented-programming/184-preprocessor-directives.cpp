#include<iostream>
using namespace std;
#define MAX(x,y) (x>y?x:y)
#define SQR(x) (x*x)
#define MSG(x) #x //returns string
#define PI 3.14159
#ifndef PI
    #define PI 3
#endif

int main()
{
    cout<<PI<<endl;
    cout<<MAX(10,12)<<endl;
    cout<<SQR(5)<<endl;
    cout<<MSG(Hello)<<endl;

    return 0;
}
