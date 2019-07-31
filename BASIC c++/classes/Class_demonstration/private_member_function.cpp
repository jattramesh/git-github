//
// Created by rahul on 25/7/19.
//
#include <iostream>
using namespace std;
class item{
    int m,n;
    void read(void){
        cout<<"input two values"<<endl;
        cin>>m>>n;
    }

public:
    void update(void);
    void write(void);
};
void item::update() {
    read();
}
void item::write() {
    cout<<m<<n;
}
int main()
{
    item s1;
    s1.update();
    s1.write();
}
