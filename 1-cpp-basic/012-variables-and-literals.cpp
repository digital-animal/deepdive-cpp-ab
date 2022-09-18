#include<iostream>
using namespace std;

int main()
{
//    int x=10;
//    int x=010;
    int x=0x10;
    cout<<"x = "<<x<<endl;

//    char a='A';
//    char a=65;
    char a=0x41;
    cout<<"a = "<<a<<endl;

//    float num=19.71;
//    float num=19.71F;
//    float num=19.71e2;
//    float num=.1971e2;
//    float num=.123456;
//    double num=.123456;
   double num=.123456e11;
   cout<<"num = "<<num<<endl;

   long double pi = 3.1415926535897932384626433832795081L;
   cout<<"pi = "<<pi<<endl;

//    float f=123e-2;
    float f=123e-4f;
    cout<<"f = "<<f<<endl;

    // const char *name ="Jewel";
    string name="Jewel";
    cout<<"name = "<<name<<endl;

    return 0;
}
