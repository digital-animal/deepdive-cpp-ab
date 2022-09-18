#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello, welcome!"<<endl;
}

int main()
{
    //display();
    void (*fp)(); // declaration, a function that takes no args and retuns void
    fp=display; // initialization of function pointer

    // (*fp)(); // calling
    fp(); // calling

    return 0;
}