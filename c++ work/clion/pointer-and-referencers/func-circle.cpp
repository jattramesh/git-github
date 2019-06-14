//
// Created by Rahul on 6/6/2019.
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//protype of circle()
void circle(const double& rad,double& um,double &f1);
const double startRadius=0.5,endradius=10.0,step=0.5;
string header ="\n ********computing circle**********\n",line(50,'-');
int main()
{
    double rad,circuit,plane;
cout<<header<<endl<<setw(10)<<"Radius"<<setw(20)<<"circumference"<<setw(20)<<"area"<<line<<endl;
cout<<fixed<<endl;
for(rad=startRadius;rad<endradius+step/2;rad+=step)
{
    circle(rad,circuit,plane);
    cout<<setprecision(1)<<setw(8)<<rad<<setprecision(5)<<setw(22)<<circuit<<setw(20)<<plane<<endl;
}
return 0;
}
//functiion circle compute circumference and area
void circle(const double &r,double & u, double &f)
{
    const double pi=3.141592;
    u=2*pi*r;
    f=pi*r*r;
}