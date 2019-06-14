#include <string>
namespace Myspace {
    std::string mess = "within the myspace";
int count=0;
double f(double);
}
namespace Yourspace
{
    std::string mess = "within namespace yourspace ";
void f()
{
    mess+='!';
}
}
namespace Myspace
{
    int g(void);
    double f(double y)
    {
        return y/10;
    }

}
int Myspace::g() //seperate defination
{
    return ++count;
}

#include <iostream>
int main() {
    std::cout << "testing names[pace ";
    std::cout << Myspace::mess << Yourspace::f();


    Yourspace::f();
}