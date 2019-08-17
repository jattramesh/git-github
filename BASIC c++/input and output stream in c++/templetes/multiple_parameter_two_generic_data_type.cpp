//
// Created by rahul on 17/8/19.
//

#include <iostream>
using namespace std;
template <class X,class Y>
class test{
    X a;
    Y b;
public:
    test(X x,Y y)
    {
        a=x;
        b=y;
    }
    void show() {
        cout << a << "and" << b << endl;

    }
};
int main()
{
    test <float,int> test1(1.23,123);
    test <int , char > test2(100,'W');
    test1.show();
    test2.show();
    return 0;
}
