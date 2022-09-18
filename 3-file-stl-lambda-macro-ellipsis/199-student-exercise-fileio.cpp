#include<iostream>
#include<fstream>
using namespace std;

class Item
{
public:
    string name;
    float price;
    int quantity;

    Item(){};
    Item(string name, float price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    friend ofstream & operator<<(ofstream &fout, Item &item);
    friend ifstream & operator>>(ifstream &fin, Item &item);
    friend ostream & operator<<(ostream &os, Item &item);

};

ofstream & operator<<(ofstream &fout, Item &item)
{
    fout<<item.name<<endl;
    fout<<item.price<<endl;
    fout<<item.quantity<<endl;

    return fout;
}

ifstream & operator>>(ifstream &fin, Item &item)
{
    fin>>item.name>>item.price>>item.quantity;

    return fin;
}

ostream & operator<<(ostream &out, Item &item)
{
    out<<item.name<<endl;
    out<<item.price<<endl;
    out<<item.quantity<<endl;

    return out;
}

int main()
{
    string name;
    float price;
    int quantity;
    int n;

    ofstream fout("items.txt", ios::trunc);

    cout<<"How many items? ";
    cin>>n;
    Item *item[n];

    cout<<"Enter items"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"#Item "<<i+1<<":"<<endl;
        cout<<"name> ";
        cin>>name;
        cout<<"price> ";
        cin>>price;

        cout<<"quantity> ";
        cin>>quantity;

        item[i] = new Item(name, price, quantity);

        // fout<<"#Item "<<i+1<<":"<<endl;
        // fout<<"Name: "<<item[i]->name<<endl;
        // fout<<"Price: "<<item[i]->price<<endl;
        // fout<<"Quantity: "<<item[i]->quantity<<endl;

        // fout<<item[i];
        fout<<*item[i];
    }

    fout.close();
    cout<<endl<<endl;

    ifstream fin("items.txt");

    // char ch;
    // ch=fin.get();
    // while(!fin.eof())
    // {
    //     cout<<ch;
    //     ch=fin.get();
    // }

    Item product;
    while(!fin.eof())
    {
        // fin>>product.name;
        // fin>>product.price;
        // fin>>product.quantity;
        fin>>product;

        // cout<<product.name<<endl;
        // cout<<product.price<<endl;
        // cout<<product.quantity<<endl;
        cout<<product<<endl;
    }
    fin.close();

    return 0;
}
