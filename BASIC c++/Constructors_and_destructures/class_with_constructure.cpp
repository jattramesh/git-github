#include <iostream>
using namespace std;
class integer{
    int m,n;
public:
    integer(int ,int );
    void display(void);
};
integer::integer(int x, int y) {
    m=x;
    n=y;
}
void integer::display() {
    cout<<m<<endl;
    cout<<n<<endl;
}
int main()
{
    integer int1(0,100);
    integer int2=integer(25,75);
    cout<<"\n Object1"<<"\n";
    int1.display();
    cout<<"\n Object2"<<"\n";
    int2.display();
}