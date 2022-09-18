#include<iostream>
using namespace std;
class Stack
{
private:
    int *stk;
    int top;
    int size;
public:
    Stack(int sz)
    {
        size=sz;
        top=-1;
        stk=new int[size];
    }
    void push(int x);
    int pop();
    int peek();
    void print();

    ~Stack()
    {
        delete []stk;
    }
};

void Stack::push(int x)
{
    if(top == size-1)
        cout<<"Stack is Full."<<endl;
    else
        stk[++top]=x;
}

int Stack::pop()
{
    int x=0;
    if(top == -1)
        cout<<"Stack is empty"<<endl;
    else
        x=stk[top--];

    return x;
}

int Stack::peek()
{
    int x=0;
    if(top == -1)
        cout<<"Stack is empty"<<endl;
    else
        x=stk[top];

    return x;
}

void Stack::print()
{
    int i=0;
    while (i <= top)
    {
        cout<< stk[i++] << " ";
    }
    cout<<endl;
}

int main()
{
    Stack s(10);
    s.print();

    s.push(11);
    cout<<s.peek()<<endl;
    s.push(21);
    cout<<s.peek()<<endl;
    s.push(13);
    cout<<s.peek()<<endl;
    s.print();

    s.pop();
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    s.print();

    s.pop();
    s.print();

    return 0;
}