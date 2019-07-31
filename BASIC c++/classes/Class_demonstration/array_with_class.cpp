//
// Created by rahul on 25/7/19.
//
#include <iostream>
using namespace std;
const int m=50;
class ITEM{
    int itemcode[m];
    float itemprice[m];
    int count;
public:
    void CNT(void){
        count=0;
    }
    void getitem(void);
    void displaysum(void);
    void remove(void);
    void displayitems(void);
};
void ITEM::getitem() {
    cout<<"Enter item code";
    cin>>itemcode[count];
    cout<<"enter item cost";
    cin>>itemprice[count];
    count++;
}
void ITEM::displaysum() {
    float sum =0;
    for(int i=0;i<count;i++)
        sum=sum+itemprice[i];
    cout<<"\n Total sum :"<<sum<<endl;
}
void ITEM::remove() {
    int a;
    cout<<"enter item code \n";
    cin>>a;
    for(int i=0;i<count;i++)
        if(itemcode[i]==a)
            itemprice[i]=0;
}
void ITEM::displayitems() {
   cout<<"\n code price ";
   for(int i=0;i<count;i++)
   {
       cout<<"\n"<<itemcode[i];
       cout <<" "<<itemprice[i];
   }
   cout<<"\n";
}

int main()
{ ITEM order;
order.CNT();
int x;
do{
    cout<<"\n you can do the following"<<"enter appropiate number "<<endl;
    cout<<"\n 1add a item";
    cout<<"\n 2display total value";
    cout<<"\n 3 deleate an item";
    cout<<"\n 4 Display an item";
    cout<<"\n 5 Quit ";
    cout<<"\n what is your option ?";
    cin>>x;
    switch(x)
    {
        case 1 : order.getitem();
        break;
        case 2 : order.displaysum();
        break;
        case 3 : order.remove();
        break;
        case 4 : order.displayitems();
        break;
        case 5: break;
        default: cout<<"error input try again";
    }
}while(x!=5);
    return  0;
}
