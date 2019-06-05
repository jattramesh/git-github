//
// Created by Rahul on 6/4/2019.
//

#include <iostream>
namespace TOOL1
{
#include "tool1-nspace.h"

}
namespace TOOL2
{

#include "tool2-nspace.h"
}

#include <iostream>
int main()
{
    using namespace std;
    double x=0.5,y=10.5,res=0.0;
    cout<<"calling function of Tool1 "<<endl;
    res=TOOL1::calculate(x,y);
    cout<<"result "<<res <<endl;
    cout<<"calling function of Tool2 !"<<endl;
    res=TOOL2::calculate(x,y);
    cout<<"result "<<res<<endl;
    return 0;
}