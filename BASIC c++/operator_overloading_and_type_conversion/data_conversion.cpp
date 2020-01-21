//
// Created by rahul on 1/8/19.
//
#include <iostream>
using namespace std;
class invent2{};     //destination class declaere
class invent1{
    int code;
    int item;
    float price;
public:
    invent1(int a,int b,int c)
    {
        code=a;
        item=b;
        price=c;
    }
    void putdata()
    {
        cout<<"code "<<code<<endl;
        cout<<"items "<<item<<endl;
        cout<<"value"<<price<<endl;
    }
    int getcode(){
        return code;
    }
    int getitems(){
        return item;
    }
    float getprice(){return price;}
    operator float {return (items* price)};

};
class invent2{
    int code;
    float value;
public:
    invent2()
    {
        code=0;
        value=0;
    }
    invent2(int x,float y)
    {
        code=x;
        value=y;
    }
    void putdata()
    {
        cout<<"code"<<code<<endl;
        cout<<"value"<<value<<endl;
    }
    invent2(invent1 p)
    {
        code=p.getcode();
        value=p.getitems()*p.getprice();
    }

};
int main()
{
    invent1 s1(100,5,140.0);
    invent2 d1;
    float total_value;
    /*invent to float */
    total_value=s1;
    /*invent1 to invent2*/
    d1=s1;
    cout<<"product details "
}