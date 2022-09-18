#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter a character> ";
    cin>>ch;

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout<<ch<<" is vowel."<<endl;
            break;
        default:
            cout<<ch<<" is not vowel."<<endl;
    }

    return 0;
}
