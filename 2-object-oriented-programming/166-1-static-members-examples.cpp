#include<iostream>
using namespace std;

class Car
{
public:
    static int price;
    static int priceHike;

    static int getPrice()
    {
        price = price + priceHike;
        return price;
    }
};

int Car::price = 100;
int Car::priceHike = 12;

int main()
{
    Car c1,c2,c3;
    cout<<c1.price<<endl;
    cout<<c2.price<<endl;
    cout<<c3.price<<endl;
    cout<<endl;
    cout<<Car::price<<endl;
    cout<<endl;
    cout<<c1.getPrice()<<endl;
    cout<<c2.getPrice()<<endl;
    cout<<c3.getPrice()<<endl;

    return 0;
}