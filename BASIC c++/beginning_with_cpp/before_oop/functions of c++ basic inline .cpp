#include <iostream>
#include <cmath>
inline double capital(double ko,double n,double p);
int  moveto(int x=0,int y=0);
inline int max(int x,int y)
{
    return(x>=y ? x : y);
}
double capital(double ko, double n, double p);

double capital(double ko, double n, double p) {
    return (ko*pow(1.0+p/100,n));
}

using namespace std;

int main(){
    std::cout<<capital(3030.00,0,0)<<endl;
    std::cout<<max(5,6)<<std::endl;
    cout<<moveto(4);
    moveto();

}
int moveto(int x,int y)//definig default argument
{
    cout<<"good"<<endl;
    return (x<=y ? y: x);
}
