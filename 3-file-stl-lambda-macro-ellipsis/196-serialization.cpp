#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream & operator<<(ofstream &fout, Student &s);
    friend ifstream & operator>>(ifstream &fin,Student &s);

};

ofstream & operator<<(ofstream &fout,Student &s)
{
    fout<<s.name<<endl;
    fout<<s.roll<<endl;
    fout<<s.branch<<endl;

    return fout;
}


ifstream & operator>>(ifstream &fin,Student &s)
{
    fin>>s.name>>s.roll>>s.branch;

    return fin;
}

int main()
{
    Student s1;
    s1.name="Jewel";
    s1.roll=905081;
    s1.branch="CS";

    ofstream fout("student.txt", ios::trunc);
    // fout<<s1.name<<endl;
    // fout<<s1.roll<<endl;
    // fout<<s1.branch<<endl;

    fout<<s1; //serialization

    fout.close();


    ifstream fin("student.txt");
    fin>>s1;
    cout<<"Name: "<<s1.name<<endl<<"Roll No: "<<s1.roll<<" "<<endl<<"Branch: "<<s1.branch<<endl;

    return 0;
}
