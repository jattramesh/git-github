//
// Created by Rahul on 6/25/2019.
//
#define abs(x)=((x<0) ? -(x) : (x))
void itoa(int n,char s[])
{
    int i,sign;
    void reverse(char s[]);  //function prototype
    sign=n;    //record sign
    i=0;
    do //generate digit in reverse order
        {

        s[i++]=abs(n%10)+'0'; //get next digit
    }while((n/=10)!=0);           // as n remain   negetive number is
if(sign<0)
{
    s[i++]='-';
}
reverse(s);
}