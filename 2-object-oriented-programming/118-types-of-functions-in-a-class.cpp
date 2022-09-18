#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(); // non parameterized constructor
    Rectangle(int l, int b); // parameterized constructor
    Rectangle(int &rect); // copy constructor
    void setLength(int l); // setter i.e mutator
    void setBreadth(int b); // setter i.e mutator
    int getLength(); // getter i.e accessors
    int getBreadth(); // getter i.e accessors
    int area(); // facilitators
    int perimeter(); // facilitators
    bool isSquare(); // inspector i.e validator i.e inquiry
    ~Rectangle(); // destructor
};

Rectangle::Rectangle(){} // dummy constructor, error handling
Rectangle::~Rectangle(){} // dummy destructor, error handling

int main()
{
    Rectangle r;
    return 0;
}