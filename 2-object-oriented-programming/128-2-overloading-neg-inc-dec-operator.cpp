#include<iostream>
#include<string>
using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0,int i=0)
    {
        setReal(r);
        setImg(i);
    }

    void setReal(int x)
    {
        real=x;
    }

    void setImg(int y)
    {
        img=y;
    }

    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }

    void display()
    {
        string op;

        if(img >= 0) op = " + ";
        else if(img < 0) op = "";

        cout<<real<< op <<img<<"i"<<endl;
    }

    friend void operator-(Complex &z);
    friend void operator--(Complex &z);
    friend void operator++(Complex &z);
};

void operator-(Complex &z)
{
    z.real = -z.real;
    z.img = -z.img;
}

void operator--(Complex &z)
{
    z.real = z.real - 1;
    z.img = z.img - 1;
}

void operator++(Complex &z)
{
    z.real = z.real + 1;
    z.img = z.img + 1;
}

int main()
{
    Complex C1(3,4);
    Complex C2(8,6);
    Complex C3(2,1);
    Complex C4(1,2);

    cout<<"#   C1: ";
    C1.display();
    cout<<"#   C2: ";
    C2.display();

    cout<<"#  -C1: ";
    -C1; // negation operator overloading here
    C1.display();

    cout<<"#  -C1: ";
    -C1; // negation operator overloading here, reverting back changes
    C1.display();

    cout<<"# --C1: ";
    --C1; // decrement operator overloading here
    C1.display();

    cout<<"# ++C2: ";
    ++C2; // increment operator overloading here
    C2.display();

    cout<<"# --C3: ";
    --C3; // increment operator overloading here
    C3.display();

    cout<<"# --C4: ";
    --C4; // increment operator overloading here
    C4.display();

    return 0;
}