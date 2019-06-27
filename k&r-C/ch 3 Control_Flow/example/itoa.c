//
// Created by Rahul on 6/25/2019.
//
void itoa(int n,char s[])
{
    if((sign=n)<0)
        n=-n;
    i=0;
    do{
        /*generate digit in reverse order*/
        s[i++]=n%10+'0';
    }
    while((n/=10)>0)
        if(sign<0)
            s[i++]='-';
        s[i]='\0';
        reverse(s);
}
