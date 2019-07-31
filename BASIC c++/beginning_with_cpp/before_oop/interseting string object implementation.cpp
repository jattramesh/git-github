#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s("hey bro");
    s.erase(3,4);
    cout<<s<<endl;
    s.insert(3," rahul");
    cout<<s<<endl;
 string s1("bhagvan bharose ");
    cout<<s1<<endl;
    s1.insert(1,s,1,20);//syntax is s1.insert(positionto insert in s1,another string source ,position from where to inset,destinantion to stop insertion)
    cout<<s1<<endl;
    string s4(s1,0,10);
    cout<<s4<<endl;
    s4.erase(6,1);//syntax is s4.erase(position to start operation,number of characetr to be delate from there)
    cout<<s4<<endl;
string w("hery babebs "),y("rexdal");
w.replace(6,4,y);//syntax => w.repace(position in w to start replacing,no of chaRcter to be replace , source of replacement )
cout<<w<<endl;
w.replace(1,6,y,1,3);//here si charcetr are replaced by 3 charcter4 oif anothere string
cout<<w<<endl;
string a(" beniwal rahul rahul"),b("nnn");
int first =a.rfind("rahul");//we use find to get occurence locate at first occiur but in  rfind we get occurence of last the same word
cout<<(first)<<endl;
}
