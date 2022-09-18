#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int result;
    char op;
    cout<<"Enter two numbers> ";
    cin>>x>>y;
    cout<<"Enter '+' for addition"<<endl;
    cout<<"      '-' for subtraction"<<endl;
    cout<<"      '*' for multiplication"<<endl;
    cout<<"      '/' for division"<<endl;
    cout<<"      'q' for exit"<<endl;
    cin>>op;
    
    switch(op)
    {
        case '+':
            result = x+y;
            cout<<x<<" + "<<y<<" = "<<result<<endl;
            break;
        case '-':
            result = x-y;
            cout<<x<<" - "<<y<<" = "<<result<<endl;
            break;
        case '*':
            result = x*y;
            cout<<x<<" * "<<y<<" = "<<result<<endl;
            break;
        case '/':
            result = x/y;
            cout<<x<<" / "<<y<<" = "<<result<<endl;
            break;
        case 'q':
            cout<<"Quit Successfully"<<endl;
            break;
        default:
            cout<<"Invalid Input"<<endl;
    }

    return 0;
}
