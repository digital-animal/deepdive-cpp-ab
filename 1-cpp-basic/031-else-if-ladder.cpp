#include<iostream>
using namespace std;

int main()
{
    int day_no;
    int day_name;

    cout<<"Enter a day number> ";
    cin>>day_no;

    if(day_no==1)
    {
        cout<<"Saturday"<<endl;
    }
    else if(day_no==2)
    {
        cout<<"Sunday"<<endl;
    }
    else if(day_no==3)
    {
        cout<<"Monday"<<endl;
    }
    else if(day_no==4)
    {
        cout<<"Tuesday"<<endl;
    }
    else if(day_no==5)
    {
        cout<<"Wednesday"<<endl;
    }
    else if(day_no==6)
    {
        cout<<"Thursday"<<endl;
    }
    else if(day_no==7)
    {
        cout<<"Friday"<<endl;
    }
    else
    {
        cout<<"Invalid day number"<<endl;
        return -1;
    }

    return 0;
}