#include<iostream>
#include<cmath>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    // constructor
    Fraction(int N=1, int D=1)
    {
        setNumerator(N);
        setDenominator(D);
    }

    // setters
    void setNumerator(int N)
    {
        numerator=N;
    }
    void setDenominator(int D)
    {
        if(D==0)
            denominator=1;
        else
            denominator=D;
    }

    // getters
    int getNumerator()
    {
        return numerator;
    }
    int getDenominator()
    {
        return denominator;
    }

    // facilitator
    friend Fraction operator+(Fraction f1, Fraction f2);
    friend Fraction operator-(Fraction f1, Fraction f2);
    friend ostream & operator<<(ostream &out, Fraction &f);

    // gcd
    int gcd(int x, int y)
    {
        int m = abs(x);
        int n = abs(y);

        while (m != n)
        {
            if(m > n) m = m -n;
            else n = n - m;
        }
        return m;
    }

    Fraction simplify(Fraction f)
    {
        int x = f.getNumerator();
        int y = f.getDenominator();

        if(x == y) return Fraction(1, 1);

        int t = gcd(x, y);
        x = x / t;
        y = y / t;

        Fraction g(x, y);
        return g;
    }

};

Fraction operator+(Fraction f1, Fraction f2)
{
    Fraction f;
    f.numerator = f1.numerator*f2.denominator + f2.numerator*f1.denominator;
    f.denominator = f1.denominator*f2.denominator;

    return f;
}

Fraction operator-(Fraction f1, Fraction f2)
{
    Fraction f;
    f.numerator = f1.numerator*f2.denominator - f2.numerator*f1.denominator;
    f.denominator = f1.denominator*f2.denominator;

    return f;
}

ostream & operator<<(ostream &out, Fraction &f)
{
    int x = f.getNumerator();
    int y = f.getDenominator();
    
    if(x == 0) out<< x;
    else out<< x <<"/"<< y;

    return out;
}

int main()
{
    int a,b,c,d;
    cout<<"# Enter first fraction (numerator & denominator): "<<endl;
    cin>>a>>b;
    cout<<"# Enter second fraction (numerator & denominator): "<<endl;
    cin>>c>>d;

    // Fraction f1(4,9);
    Fraction f1(a,b);

    // Fraction f2(2,3);
    Fraction f2(c,d);

    cout<<"Fraction 1: "<<f1<<endl;
    cout<<"Fraction 2: "<<f2<<endl;

    Fraction f3 = f1 + f2;
    f3 = f3.simplify(f3);

    Fraction f4 = f1 - f2;
    f4 = f4.simplify(f4);

    // cout<<"Fraction("<<f3.getNumerator()<<", "<<f3.getDenominator()<<")"<<endl;
    cout<<f1<<" + "<<f2<<" = "<<f3<<endl;
    cout<<f1<<" - "<<f2<<" = "<<f4<<endl;

    return 0;
}