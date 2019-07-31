//
// Created by rahul on 26/7/19.
//
#include <iostream>
using namespace std;
class sample{
    int a;
    int b;
public:
    void setvalue(int c,int d=25){
        a=c;
        b=d;
    };
    friend float mean(sample s);
};
float mean(sample s)
{
    return float(s.a+s.b)/2.0;
}
int main()
{
    sample X;
    X.setvalue(20);
    cout<<"mean value is"<<mean(X)<<"\n";
    return 0;
}
