#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    float marks[5];
public:

    Student(int roll, string name, float *marks)
    {
        this->roll = roll;
        this->name = name;
        for(int i=0;i<5;i++)
        {
            this->marks[i] = *marks++;
        }
    }

    string calculate_grade()
    {
        float sum = 0;
        // static float avg = 0;
        float avg = 0;
        string grade;

        for(int i=0;i<5;i++)
        {
            sum = sum + this->marks[i];
        }
        avg = sum/5;
        cout<<"Avg = "<<avg<<endl;

        if(avg>=80 and avg<=100)
            grade = "A+";
        else if(avg>=70 and avg<80)
            grade = "A";
        else if(avg>=60 and avg<70)
            grade = "A-";
        else if(avg>=50 and avg<60)
            grade = "B"; 
        else if(avg<50 and avg>=40)
            grade = "C";
        else if(avg<40 and avg>=33)
            grade = "D";
        else if(avg<33 and avg>=0)
            grade = "F";
        else
            grade = "NULL";

        return grade;

    }

    void print_info()
    {
        cout<<"Roll no: "<< this->roll <<endl;
        cout<<"Name: "<< this->name <<endl;
        cout<<"Grade: "<< this->calculate_grade() <<endl;
    }
};

int main()
{
    // Student s1;
    int roll;
    string name;
    float marks[5];
    string grade;

    cout<<"Enter roll no> ";
    cin>>roll;
    cout<<"Enter name> ";
    // cin>>name; // problematic
    cin.ignore();
    getline(cin, name);
    // gets(name); // not recommended

    cout<<"Enter marks of 5 subjects> ";
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }

    Student s1(roll, name, marks);

    // grade=s1.calculate_grade();
    // cout<<grade;

    s1.print_info();

    return 0;
}