#include<iostream>
using namespace std;

class MyException1:public exception
{

};

class MyException2:public MyException1
{

};


int main()
{
    int x=10,y=0,z;
    try
    {
        // throw 101;
        // throw 1.5f;
        // throw 4.04;
        // throw 'e';
        // throw string("error");
        // throw MyException2();
        // throw MyException1();
        throw "Division By Zero";
    }
    //integer catch
    catch(int e)
    {
        cout<<"Integer Catch."<<endl<<endl;
    }
    //float catch
    catch(float e)
    {
        cout<<"Float Catch."<<endl<<endl;
    }
    //double catch
    catch(double e)
    {
        cout<<"double Catch."<<endl<<endl;
    }
    //character catch
    catch(char e)
    {
        cout<<"Character Catch."<<endl<<endl;
    }
    //string catch
    catch(string e)
    {
        cout<<"String Catch."<<endl<<endl;
    }
    //child class exception
    catch(MyException2 e)
    {
        cout<<"MyException2 Catch"<<endl<<endl;
    }
    //parent class exception
    catch(MyException1 e)
    {
        cout<<"MyException1 Catch"<<endl<<endl;
    }

    //all exception
    catch(...)
    {
        cout<<"All Catch."<<endl<<endl;
    }
    //Quality assurance
    cout<<"Program Successfully Executed!"<<endl;

    return 0;
}