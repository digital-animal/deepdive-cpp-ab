#include<iostream>
#include<string>
using namespace std;

template<class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;
public:
    Stack(int sz)
    {
        size=sz;
        top=-1;
        stk=new T[size];
    }
    void push(T x);
    T pop();
    T peek();
    void print();

    ~Stack()
    {
        delete []stk;
    }
};

template<class T>
void Stack<T>::push(T x)
{
    if(top == size-1)
        cout<<"Stack is Full."<<endl;
    else
        stk[++top]=x;
}


template<class T>
T Stack<T>::pop()
{
    T x=0;
    if(top == -1)
        cout<<"Stak is empty"<<endl;
    else
        x=stk[top--];

    return x;
}

template<class T>
T Stack<T>::peek()
{
    T x=0;
    if(top == -1)
        cout<<"Stack is empty"<<endl;
    else
        x=stk[top];

    return x;
}

template<class T>
void Stack<T>::print()
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
    cout<<"# Integer Stack"<<endl;
    Stack<int> s1(10);
    s1.print();

    s1.push(11);
    s1.push(21);
    s1.push(13);
    cout<<s1.peek()<<endl;
    s1.print();

    s1.pop();
    s1.pop();
    s1.pop();
    s1.print();

    s1.pop();
    s1.print();
    cout<<endl;

    cout<<"# Float Stack"<<endl;
    Stack<float> s2(5);
    s2.push(4.9f);
    s2.push(2.3f);
    s2.push(5.7f);
    cout<<s2.peek()<<endl;
    s2.print();
    cout<<endl;

    cout<<"# Character Stack"<<endl;
    Stack<char> s3(5);
    s3.push('A');
    s3.push('B');
    s3.push('D');
    cout<<s3.peek()<<endl;
    s3.print();
    cout<<endl;

    return 0;
}