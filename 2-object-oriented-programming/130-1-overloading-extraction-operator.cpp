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

    friend ostream & operator<<(ostream &out, Complex &C);
};

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
    Complex C1(3,7);
    Complex C2(4,9);
    Complex C3(3,-4);
    Complex C4(2,-0);
    
    cout<<C1; // C is passed as an arghument in cout<< i.e. operator<< function
    operator<<(cout,C1);
    cout<<endl;

    cout<<C1<<C2<<C3<<C4;
}