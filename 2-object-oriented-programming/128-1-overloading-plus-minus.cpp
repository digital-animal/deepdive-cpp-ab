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
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    friend Complex operator+(Complex z1,Complex z2);
    friend Complex operator-(Complex z1,Complex z2);
};

Complex operator+(Complex z1,Complex z2)
{
    Complex t;
    t.real = z1.real + z2.real;
    t.img = z1.img + z2.img;
    return t;
}

Complex operator-(Complex z1,Complex z2)
{
    Complex t;
    t.real = z1.real - z2.real;
    t.img = z1.img - z2.img;
    return t;
}

int main()
{
    Complex C1(5,4);
    Complex C2(3,2);
    Complex C3;
    Complex C4;

    C3 = C1 + C2; //operator overloading here
    C4 = C1 - C2; //operator overloading here

    C1.display();
    C2.display();
    C3.display();
    C4.display();

    return 0;
}
