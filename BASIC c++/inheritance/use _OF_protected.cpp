#include <iostream>
using namespace std;
//base class
class shape{
protected:
    int width;
    int height;
public:
    void setwidth(int w)
    {
        width=w;
    }
    void setheight(int h)
    {
        height=h;
    }
};
//drived class
class rectangle:public shape
{
public:
    int       get_area(){
        return (width*height);
    }

};
int main()
{
    rectangle rect;
    rect.setwidth(5);
    rect.setheight(7);
    cout<<"total area :"<<rect.get_area()<<endl;
}
