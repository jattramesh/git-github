//
// Created by Rahul on 6/11/2019.
//
#include "Article.h"
#include <iostream>
#include <string>
using namespace std;
void test();
//----crates and destroy object of article class
Article Article1(1111,"volleyball",59.9);
int main()
{
    cout<<"\n the first statemnt in main()\n";
    Article Article2(222,"gymshoes",199.99);
    Article1.print();
    Article2.print();
    Article &shoes=Article2; //another name
    shoes.setNr(2223);
    shoes.setname("jogging shoes");
    shoes.setSales(shoes.sales-50);
    cout<<"\n the new value for shoes object "<<endl;
    shoes.print();
 cout<<"first call on test()"<<endl;
 test();
 cout<<"second call to test()"<<endl;
 test();
 cout<<"the last statement in main()"<<endl;

}
void test()
{
    Article shirt(3333,"T-Shirt",29.9);
    shirt.print();;
    static Article net(444,"volley ball net",99.0);
    net.print();
cout<<"the last statement in function test()"<<endl;
}
