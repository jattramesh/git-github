#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
string header = " ************solution of quadratic equation *************\n",line(50,'-');
bool quadequation(double a, double b, double_t c ,double* x1ptr, double* x2ptr);
//priting the eqaution and its solution
void printquadequation(double a,double b,double c);
int main()
{
cout<<header<<endl;
printquadequation(2.0,-2.0,-4.0);
}
void printquadequation(double a, double b, double c) {
    double x1 = 0.0, x2 = 0.0;//solution for quadratic eqn
    cout << line << '\n' << "the quadrattic equAtion is \n\t" << a << "x*x+" << b << "x +" << c << " =0" << endl;
    if (quadequation(a,b,c,& x1, &x2)) {
        cout << "has real solution :" << "\n\t x1=" << x1 << "\n\t x2=" << x2 << endl;
    } else {
        cout << "has no real root " << endl;

    }
    cout << "go on with return \n\n" <<
         cin.get();
}
bool quadequation(double a, double b, double c, double* x1ptr, double *x2ptr)
{bool return_flag=false;
doublre dis=b*b-4*a*c;
if(dis>=0)
{
    dis=sqrt(dis);
    *x1ptr=(-b+help)/2*a;
    *x2ptr=(-b-help)/2*a;
    return_flag=true;
}
    return return_flag;
}