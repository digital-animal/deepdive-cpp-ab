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

    Complex operator+(Complex z)
    {
        Complex temp;
        temp.real = this->real + z.real;
        temp.img = this->img + z.img;

        return temp;
    }

    Complex operator-(Complex z)
    {
        Complex temp;
        temp.real = this->real - z.real;
        temp.img = this->img - z.img;

        return temp;
    }

    Complex operator*(Complex z)
    {
        Complex temp;
        temp.real = this->real*z.real - this->img*z.img;
        temp.img = this->real*z.img + this->img*z.real;

        return temp;
    }

    void print()
    {
        cout<< this->getReal() << "+" << this->getImg() << "i" <<endl;
    }
};


int main()
{
    Complex C1(5,4);
    Complex C2(3,2);
    Complex C3;
    Complex C4;
    Complex C5;

    C3 = C1 + C2; //operator overloading here
    C4 = C1 - C2; //operator overloading here
    C5 = C1 * C2; //operator overloading here

    // cout<< C1.getReal() << "+" << C1.getImg() << "i" <<endl;
    // cout<< C2.getReal() << "+" << C2.getImg() << "i" <<endl;
    // cout<< C3.getReal() << "+" << C3.getImg() << "i" <<endl;
    // cout<< C4.getReal() << "-" << C4.getImg() << "i" <<endl;
    // cout<< C5.getReal() << "+" << C5.getImg() << "i" <<endl;

    C1.print();
    C2.print();
    C3.print();
    C4.print();
    C5.print();

    return 0;
}