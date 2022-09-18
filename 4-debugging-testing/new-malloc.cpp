#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    int a;
    int *p;
    //C
    p=(int*)malloc(sizeof(int));
    *p=10;
    printf("%d",*p);
    free(p);

    //C++
    //p=new int;
    //*p=10;
    //cout<<*p;
    //delete p;
}
