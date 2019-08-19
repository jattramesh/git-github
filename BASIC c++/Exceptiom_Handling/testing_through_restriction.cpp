//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
void test(int x) throw(char,int,double)
{
        if(x==1) throw x;
        else
            if(x==-1) throw 1.0;
   else  if(x==0) throw 'X';
            cout<<"End of function block \n";
}
int main()
{
    try{
        cout<<"Testing throw Restriction"<<endl;
        cout<<"x==0\n";
        test(0);
            cout<<"x==1"<<endl;
            test(1);
            cout<<"x==-1"<<endl;
            test(-1);
            cout<<"x==2\n";
            test(2);
    }
        catch(int m)
        {
        cout<<"caught an integer";
        }
     catch(double d)
     {
         cout<<"caught an double ";
    }
    catch(char c) {
        cout << "caught a char ";
    }
     cout<<"End of try-catch system";
}
