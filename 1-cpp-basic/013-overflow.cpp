#include<iostream>
#include<climits>

using namespace std;

int main()
{
    char ch = 122;
    cout<<ch<<endl;
    ch=ch+6;
    cout<<ch<<endl;
    char x = 128;
    char y = -128;
    cout<<x<<endl;
    cout<<(char)x<<endl;
    cout<<y<<endl;
    cout<<(char)y<<endl;

    char z=127;
    cout<<(int)z<<endl; // typecasting
    z++;
    cout<<(int)z<<endl; // typecasting

    char w=-128;
    cout<<(int)w<<endl; // typecasting
    w--;
    cout<<(int)w<<endl; // typecasting

    int n = INT_MAX;
    cout<<n<<endl;
    n++;
    cout<<n<<endl;
    return 0;
}
