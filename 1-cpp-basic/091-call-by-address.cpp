#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout<<"[inside swap()] before swapping: "<<"*a = "<<*a<<" "<<"*b = "<<*b<<endl;
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<"[inside swap()] after swapping: "<<"*a = "<<*a<<" "<<"*b = "<<*b<<endl;
}

int main()
{
    int x=10, y=20;
    cout<<"[inside main()] before swapping: "<<"x = "<<x<<" "<<"y = "<<y<<endl;
    swap(&x,&y);
    cout<<"[inside main()] after swapping: "<<"x = "<<x<<" "<<"y = "<<y<<endl;

    return 0;
}

