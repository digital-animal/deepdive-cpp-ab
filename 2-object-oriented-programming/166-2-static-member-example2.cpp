#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    static int adminNo;
    Student(string x)
    {
        adminNo++;
        rollNo=adminNo;
        name=x;
    }
    void display()
    {
        cout<<"Name: "<<name<<"\t"<<"Roll: "<<rollNo<<endl;
    }

};


int Student::adminNo=0;

int main()
{
    Student s1("Zahid");
    Student s2("John");
    Student s3("Zaman");
    s1.display();
    s2.display();
    s3.display();
    cout<<"Admission Counter: "<<Student::adminNo<<endl;

    return 0;
}

