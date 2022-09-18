#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream outfile("Myfile.txt",ios::app);
    ofstream outfile("Myfile.txt",ios::trunc);
    outfile<<"Who are you?"<<endl;
    outfile<<12<<endl;

    outfile.close();

    return 0;
}
