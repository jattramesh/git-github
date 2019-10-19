#include "park.h"
int main()
{
        int status;
    string option;
    printf("Do you want to remove previous save data");
cin>>option;
if(option=="yes")
{
    status=remove("car.txt");
    if(status==0)
    cout<<"successfully deleted, move on ";
    else
    cout<<"file delete error , start appending if file exist";
}
else
{
    cout<<"No Problem, Sir";
}
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
        cout<<"total_cars"<<(gate[0])*16<<"\n";
        ofstream f;
        sleep(60);
        f.open("car.txt",ios::out|ios::app);
        f<<"total_car "<<(gate[0]+1)*16<<"\n";
        ++gate[0];
cout<<"total_cars"<<(gate[0])*16<<"\n";
        cout<<"\a\a\a\a\a";
        system("CLS");

    }
}
