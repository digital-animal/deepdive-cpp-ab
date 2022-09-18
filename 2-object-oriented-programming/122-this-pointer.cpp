#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }

    int area()
    {
        int result =length*breadth;
        return result;
    }

    int perimeter()
    {
        int result =2*(length+breadth);
        return result;
    }
};

int main()
{
    int L,B;
    cout<<"Enter length: ";
    cin>>L;
    cout<<"Enter breadth: ";
    cin>>B;

    Rectangle r(L,B);
    int A=r.area();
    int P=r.perimeter();
    cout<<"Area: "<<A<<endl;
    cout<<"Perimeter: "<<P<<endl;

    return 0;
}

