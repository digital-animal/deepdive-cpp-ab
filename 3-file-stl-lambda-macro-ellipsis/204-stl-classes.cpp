#include<iostream>
#include<vector>//makes an array
#include<list>//makes linked list(doubly linked list)
//change all vector by list
//all will remain same
#include<forward_list>//singly linked list
#include<set>

using namespace std;
int main()
{
    // vector<int> v={2,4,6,8,9,10};
    list<int> v={2,4,6,8,9,10};

    v.push_back(20);
    // v.push_front(99); //for singly linked list
    // v.insert(20); //for set
    // v.insert(10); //for set
    v.push_back(30);
    v.pop_back();


    // vector<int>::iterator itr;
    list<int>::iterator itr;

    /// using iterator and while loop
    itr=v.begin();
    while(itr!=v.end())
    {
        cout<<*itr++<<" ";
    }
    cout<<endl;
    cout<<endl;

    /// using iterator and for loop
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<*itr<<" ";
    cout<<endl;
    cout<<endl;

    /// using for each loop
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    cout<<endl;

    /// using iterator and dereferenced
    for(itr=v.begin();itr!=v.end();itr++)
        cout<<++*itr<<" ";
    cout<<endl;

    return 0;
}
