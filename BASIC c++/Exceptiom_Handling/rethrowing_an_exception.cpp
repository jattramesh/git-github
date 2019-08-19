//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
void divide(double x,double y)
{
    cout<<"inside function"<<endl;
    try {
        if (y == 0.0)
            throw (y);
        else
            cout << "Division" << x / y << endl;
    }
    catch(double)
    {
        cout<<"caught double inside function"<<endl;
        throw;
    }
    cout<<"End of function\n";
}
int main()
{
    cout<<"inside main"<<endl;
    try
    {
       divide(10.5,2.0);
       divide(3.0,0.0);
    }
    catch(double)
    {
        cout<<"caught double inside main\n";
    }
    cout<<"end of main\n";
    return 0;
}