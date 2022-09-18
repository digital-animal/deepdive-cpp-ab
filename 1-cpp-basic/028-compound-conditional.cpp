#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age> ";
    cin>>age;


    // using &&
    if(age>=12 && age<=40)
    {
        cout<<"You are young"<<endl;
    }
    else
    {
        cout<<"You are not young"<<endl;
        // return -1;
        // exit(1);
    }

    // using ||
    if(!(age<12 || age>40))
    {
        cout<<"You are young"<<endl;
    }
    else
    {
        cout<<"You are not young"<<endl;
    }
    return 0;
}
