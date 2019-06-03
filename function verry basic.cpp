#include<iostream>
using namespace std;
void test(int , double);//type name(deecleration_list);
int main()
{
cout<<"\n now function test() will be caslled "<<endl;
test(10,-7.5);
cout<<"\n and back again in main()"<<endl;
}
void test(int arg1, double arg2)//function defination
{
    cout<<"\n In functiontest will be called \n"<<endl;
cout<<"in function test\n""arg1"<<arg1<<endl<<"arg2"<<arg2<<endl;


}
