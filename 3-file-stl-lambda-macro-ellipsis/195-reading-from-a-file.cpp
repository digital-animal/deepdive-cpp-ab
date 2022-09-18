#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ifstream infile("Myfile.txt"); // using constructor
    ifstream infile; // using object and open() method
    infile.open("myfile.txt");

    // if(infile) cout<<"File is opened"<<endl;
    if(infile.is_open()) cout<<"File is opened"<<endl;
    string name;
    int roll;
    string branch;

    infile>>name;
    infile>>roll;
    infile>>branch;
    // infile>>name>>roll>>branch;
    cout<<name<<" "<<roll<<" "<<branch<<endl;

    infile.close();

    return 0;
}