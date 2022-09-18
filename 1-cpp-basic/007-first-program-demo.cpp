#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<<"Enter your name> ";
    // cin>>str; // single word
    getline(cin, str);
    cout<<"Your name: "<<str<<endl;

    return 0;
}
