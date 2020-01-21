//
// Created by rahul on 18/8/19.
//
#include <iostream>
using namespace std;
void test(int x)
{
    try {
        if(x==1) throw x;
        else
            if(x==0) throw 'x';
            else
                if(x==-1) throw 1.0;
                cout<<"end of try block";
    cout<<"End of try-catch"<<endl;

    }
    catch(int m)
    {
        cout<<"cought at integer";
    }
    catch(char c)
    {
        cout<<"caught at char";
    }
    catch(double d)
    {
        cout<<"caught at reAL value";
    }

}
int main()
{
    cout<<"Test Multiple Catches";
    test(-1);

}