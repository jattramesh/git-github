#include <iostream>
#include <iomanip>
#include <cstdlib> //for rand ,srand
#include <ctime> //for time
using namespace std;
bool setrand =false ;
inline void init_random() //intialize random number with current time
{
    if(!setrand)
    {
        srand((unsigned int)time(NULL));
        setrand=true;
    }
}
inline double myRandom()
{
    init_random();
    return (double)rand()/(double)RAND_MAX;
}
inline int myRandom(int start,int end) // Return the random number n with start <=n <=end
{
    init_random();
    return (rand() % (end -start)+start);
}
//testing myRandom and myRandom(int ,int ) overloading concept domenstartion
int main()
{
    int i;
    cout<<RAND_MAX<<endl;
    cout<<" 5 random number between 0 and 1.0"<<endl;
    for(i=0;i<5;i++)
    cout<<setw(10)<<myRandom()<<endl;
    cout<<"and now 5 random number b/w 100 and -100"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<setw(10)<<myRandom(-100,100)<<endl;
    }
    return 0;

}
