#include<iostream>
using namespace std;

int main()
{
    float initial_bill;
    float final_bill;
    float discount=0.0;
    cout<<"Enter initial bill> ";
    cin>>initial_bill;
    cout<<"Initial Bill: "<<initial_bill<<endl;

    if(initial_bill<100)
    {
        discount=0;
        final_bill=initial_bill-discount;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final bill: "<<final_bill<<endl;
    }
    else if(initial_bill>=100 && initial_bill<500)
    {
        discount=initial_bill*0.1;
        final_bill=final_bill=initial_bill-discount;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final bill: "<<final_bill<<endl;
    }
    else if(initial_bill>=500)
    {
        discount=initial_bill*0.2;
        final_bill=initial_bill-initial_bill*0.2;
        cout<<"Discount: "<<discount<<endl;
        cout<<"Final bill: "<<final_bill<<endl;
    }

    return 0;
}


