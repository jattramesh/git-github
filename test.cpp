#include<iostream>
#include<string>
using namespace std;
#define DELAY 100000000L //output delay
#define CLS (cout<<"\033[2J") //clear screen
#define LOCATE(z,s) (cout<<"\033["<<z<<';'<<s<<'H')
main()
{
    int x=2,y=3,dx=1,speed=0;
    string floor(79,'-');
    string header="*****jumping ball ******";
    CLS;
    LOCATE(1,25);
    cout<<header;
    LOCATE(25,1);
    cout<<floor;
    while(true)
    {
        cout<<'o'<<endl;//show the ball
        for(long wait=0;wait<DELAY;++wait)
        ;
        if(x==1||x==79)
        dx=-dx;
        if(y==24)
        {
          speed=-speed;
          if(speed==0)
          speed=-7;
        }
        speed+=1;
        LOCATE(y,x);
        cout<<' ';
        y+=speed;
        x+=dx;
    }
}
