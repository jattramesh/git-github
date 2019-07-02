#include <iostream>
#include <string>
using namespace std;
class shop{
private:
     string worker;
    string shopname;
    int price;
    int workernum;
    long totalsal;
    short worth;
public:
    shop(string str)
    {
        worker=str;
        cout<<worker<<endl;
    }
    shop( int faf,long pap){
        workernum=faf;
        totalsal=pap;
    cout<<workernum<<endl<<totalsal<<endl;
    }
    shop(void);
    void  shopremake(const string,int ,short );
void settotalsal(long);
    long gettotalsal(void);
void printdata()
{
    cout<<"totalsal"<<totalsal<<endl;
}
};

void shop::settotalsal(long nuu) {
    totalsal=nuu;
}
long shop::gettotalsal() {
    return totalsal;
}
shop::shop()
{
    cout<<"shop closed "<<endl;
}

shop globalshop(1000,1212233);
int main()
{
    shop mall(500,2000000l);
shop manyshop[]={shop(11,222),shop(22,44),globalshop,shop()};
manyshop[1].settotalsal(2222222);
manyshop[1].printdata();
manyshop[4].printdata();
}