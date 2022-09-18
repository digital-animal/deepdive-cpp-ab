#include<iostream>
using namespace std;

class Demo
{
public:
    int x=10;
    int y=20;

    // void display()
    // {
    //     x++;
    //     cout<<x<<" "<<y<<endl;
    // }
    
    void display() const
    {
        // x++; // invalid
        cout<<x<<" "<<y<<endl;
    }
};

// void fun(int &p, int &q)
// {
//     cout<<p<<" "<<q<<endl;
//     p++; // valid
// }

void fun(const int &p, int &q)
{

    cout<<p<<" "<<q<<endl;
    // p++; // invalid
}

int main()
{
    // const int x=10; // equivalent
    // int const x=10;
    // int x=10;
    // int y=20;

    // cout<<++x;//invalid//x read only
    // cout<<x<<endl;

    // int *ptr=&x;
    // const int *ptr=&x;
    //     ++(*ptr);
    // cout<<*ptr<<" "<<x<<endl;

    // ptr=&y;
    // ++(*ptr);//invalid
    // cout<<*ptr<<" "<<y<<endl;

    // int z=15;
    // int *const ptr=&z;
    // const int *const ptr=&z;
    // cout<<*ptr<<" "<<z<<endl;


    // int p=25;
    // ptr=&p; //pointer is constant so it is not possible
    // cout<<++*ptr<<" "<<z<<endl;
    // cout<<*ptr<<" "<<z<<endl;

    // OF CLASS
    // Demo d;
    // d.display();

    // OF Function
    // int a=11;
    // int b=22;
    // fun(a,b);
    // cout<<a<<" "<<b;

    return 0;
}