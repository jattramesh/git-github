//
// Created by rahul on 25/7/19.
//
#include <iostream>
using namespace std;
class set{

    int m,n;
public:
    void input(void);
    void display(void);
    int largest(void);
};
int set::largest() {
    if(m>n)
        return m;
    else
        return n;
}
void set::input() {
    cout<<"\ninput values of m,n "<<endl;
    cin>>m>>n;
}
void set::display() {
    cout<<"largest value"<<largest()<<"\n";
}
int main()
{
    set A;
    A.input();
    A.display();
    return 0;
}