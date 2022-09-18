#include<iostream>
using namespace std;
// enum day {mon,tue,wed,thu,fri,sat,sun};
// enum day {sat,sun,mon,tue,wed,thu,fri};
//enum day {sat,sun,mon,tue,wed,thu,fri};
enum day {sat=1,sun,mon,tue,wed,thu,fri};
enum dept {cse=1,eee,ce,mme,ipe,me};
//#define sat 1

typedef int marks;

int main()
{
    cout<<"# enum: day"<<endl;
    day d;
    d=thu;
    d=fri;
    // d++;
    cout<<d<<endl;
    cout<<sun<<endl;
    cout<<endl;

    cout<<"# enum: dept"<<endl;
    dept dep;
    dep=cse;
    cout<<dep<<endl;
    cout<<endl;

    cout<<"# typedef"<<endl;
    marks m1,m2;
    m1=67;
    m2=82;
    cout<<m1<<" "<<m2<<endl;
    cout<<endl;

    return 0;
}
