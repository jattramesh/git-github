//
// Created by Rahul on 6/7/2019.
//
#include <iostream>
using namespace std;
union wordbyte
{
private:
    unsigned short w; //16 bit
    unsigned char b[2];//2 bytes b[0],b[1] word acess and byte acess
public:
    unsigned short &word()
    {return w;}
    unsigned char& lowbyte()
    {return b[0];}
unsigned char& highbyte()
{return b[1];}
     };
int main()
{
    wordbyte wb;
    wb.word()=256;
    cout<<"\n word"<<(int)wb.word()<<"low byte"<<(int)wb.lowbyte()<<"\n high byte"<<(int)wb.highbyte()<<endl;

}