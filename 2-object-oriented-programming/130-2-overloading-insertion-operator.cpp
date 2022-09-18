#include<iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }

    friend ostream & operator<<(ostream &out, Complex &C1);
    friend istream & operator>>(istream &out, Complex &C1);
};

istream & operator>>(istream &in, Complex &C1)
{
    in>>C1.real>>C1.img;

    return in;
}

ostream & operator<<(ostream &out, Complex &C1)
{
    string op;

    if(C1.img >= 0) op = "+";
    else if(C1.img < 0) op = "";

    out<<C1.real<< op <<C1.img<<"i"<<endl;

    return out;
}

int main()
{
    Complex C1;
    cout<<"# Enter a complex number(a,b): ";
    cin>>C1;
    // cout<<C1; // C is passed as an arghument in cout<< i.e. operator<< function
    cout<<"z = "<<C1<<endl;

    return 0;
}