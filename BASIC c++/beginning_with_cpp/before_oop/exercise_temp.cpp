//
// Created by rahul on 18/7/19.
//
#include <iostream>
using namespace std;
class temp{
private:
    int fahr;
    int cel;
public:
    int converter(int);
};
int temp::converter(int et) {
    fahr=et;
    cel= (5*(fahr-32)/9);
    return cel;
}
int main()
{
    temp convert;
    int converted_tempreture=convert.converter(32);
    cout<<converted_tempreture<<endl;

}