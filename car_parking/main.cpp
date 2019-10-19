#include "park.h"
int main()
{
    design_box box;
    while(true)
    {
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        box.box_maker();
        fstream f("car.txt");
        f<<"total_car "<<(gate[0]+1)*16<<"\n";
        sleep(60);
        ++gate[0];
cout<<"total_cars"<<(gate[0])*16<<"\n";
        cout<<"\a\a\a\a\a";
    }
}